from lxml import etree
import sys

class KeyboardLayoutInstaller:
    def __init__(self, layout_name, system_layout_file, layout_config_file, system_layout_xml_file, config_xml_file):
        self.layout_name = layout_name
        self.system_layout_file = system_layout_file
        self.layout_config_file = layout_config_file
        self.system_layout_xml_file = system_layout_xml_file
        self.config_xml_file = config_xml_file

    def configure_layout(self):
        with open(self.layout_config_file, "r") as source:
            content = source.read()

        with open(self.system_layout_file, "r") as target:
            target_content = target.read()

        if self.layout_name not in target_content:
            with open(self.system_layout_file, "a") as target:
                target.write(content)
            print("The keyboard layout has been configured successfully!")
        else:
            print("The keyboard layout is already configured. Skipping...")

    def register_layout(self):
        parser = etree.XMLParser(remove_blank_text=True)
        tree = etree.parse(self.system_layout_xml_file, parser)
        root = tree.getroot()

        variant_tree = etree.parse(self.config_xml_file, parser)
        variant_root = variant_tree.getroot()

        layout_elem = root.xpath("//layout[configItem/name='in']")
        if not layout_elem:
            print("Registration failed! Layout 'in' not found.")
            return

        layout_elem = layout_elem[0]
        variant_list_elem = layout_elem.find("variantList")

        if variant_list_elem is None:
            print("Registration failed! 'variantList' not found under layout 'in'.")
            return

        for variant_elem in variant_list_elem.findall("variant"):
            name_elem = variant_elem.find("configItem/name")
            if name_elem is not None and name_elem.text == self.layout_name:
                print("The keyboard layout is already registered. Skipping...")
                return

        variant_list_elem.append(variant_root)
        with open(self.system_layout_xml_file, "wb") as f:
            f.write(etree.tostring(
                tree,
                pretty_print=True,
                xml_declaration=True,
                encoding="UTF-8",
                doctype='<!DOCTYPE xkbConfigRegistry SYSTEM "xkb.dtd">'
            ))
        print("The keyboard layout has been registered successfully!")

    def uninstall(self):
        # Remove layout configuration from file
        with open(self.layout_config_file, "r") as source:
            content_to_remove = source.read().strip()

        with open(self.system_layout_file, "r") as target:
            current_content = target.read()

        if content_to_remove in current_content:
            updated_content = current_content.replace(content_to_remove, "")
            with open(self.system_layout_file, "w") as target:
                target.write(updated_content)
            print("Keyboard layout configuration has removed successfully!")
        else:
            print("No layout configuration found to remove.")

        # Remove variant from XML
        parser = etree.XMLParser(remove_blank_text=True)
        tree = etree.parse(self.system_layout_xml_file, parser)
        root = tree.getroot()

        layout_elem = root.xpath("//layout[configItem/name='in']")

        if not layout_elem:
            print("Deregistration failed! Layout 'in' not found.")
            return
        
        layout_elem = layout_elem[0]
        variant_list_elem = layout_elem.find("variantList")

        if variant_list_elem is None:
            print("Deregistration failed! 'variantList' not found under layout 'in'.")
            return
        
        layout_removed = False
        for variant_elem in variant_list_elem.findall("variant"):
            name_elem = variant_elem.find("configItem/name")
            if name_elem is not None and name_elem.text == self.layout_name:
                variant_list_elem.remove(variant_elem)
                layout_removed = True
                break

        if layout_removed is True:
            with open(self.system_layout_xml_file, "wb") as f:
                f.write(etree.tostring(
                    tree,
                    pretty_print=True,
                    xml_declaration=True,
                    encoding="UTF-8",
                    doctype='<!DOCTYPE xkbConfigRegistry SYSTEM "xkb.dtd">'
                ))
            print("Keyboard layout deregistered successfully!")
        else:
            print("No layout registration found to remove.")

    def install(self):
        self.configure_layout()
        self.register_layout()

if __name__ == "__main__":
    installer = KeyboardLayoutInstaller(
        layout_name="owtamilkb",
        system_layout_file="/usr/share/X11/xkb/symbols/in",
        system_layout_xml_file="/usr/share/X11/xkb/rules/evdev.xml",
        layout_config_file="/usr/share/owtamilkb/keymaps_ta.c",
        config_xml_file="/usr/share/owtamilkb/kb_config.xml"
    )

    if "--uninstall" in sys.argv:
        installer.uninstall()
    else:
        installer.install()
