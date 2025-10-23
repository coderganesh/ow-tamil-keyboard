partial alphanumeric_keys
xkb_symbols "owtamilkb" {

    // Name: Ow Tamil Keyboard Layout
    // Description: Easiest keymap ever created for Tamil based on mapping with English letters having similar pronunciation.
    // Encoding: Unicode (http://www.unicode.org)
    // Author: Ganeshan Murugan <coderganesh@github>
    // Date  : Sun October 19 22:35:00 IST 2025
    // Version: 1.1

    name[Group1]= "Tamil (Ow Keyboard)";

    // Number row
    key <AE04>  { [ 4, dollar, U20B9 ] };   // AltGr + 4 = ₹

    // Q row
    key <AD01>	{[ U0B94, NoSymbol, U0BCC ]};   // Q = ஔ; AltGr + ஔ =  ௌ
    key <AD02>	{[ U0BCD ]};    // W = ்
    key <AD03>	{[ U0B87, U0B88, U0BBF, U0BC0 ]};   // E = இ; Shift + இ = ஈ; AltGr + இ =  ி; AltGr + ஈ =  ீ
    key <AD04>	{[ U0BB0, U0BB1 ]}; // R = ர; Shift + ர = ற
    key <AD05>	{[ U0B9F ]};    // T = ட
    key <AD06>	{[ U0BAF ]};    // Y = ய
    key <AD07>	{[ U0B89, U0B8A, U0BC1, U0BC2 ]};   // U = உ; Shift + உ = ஊ; AltGr + உ =  ு; AltGr + ஊ =  ூ
    key <AD08>	{[ U0B90, NoSymbol, U0BC8 ]};   // I = ஐ; AltGr + ஐ =  ை
    key <AD09>	{[ U0B92, U0B93, U0BCA, U0BCB ]};   // O = ஒ; Shift + ஒ = ஓ; AltGr + ஒ =  ொ; AltGr + ஓ =  ோ
    key <AD10>	{[ U0BAA ]};    // P = ப

    // A row
    key <AC01>	{[ U0B85, U0B86, NoSymbol, U0BBE ]};    // A = அ; Shift + அ = ஆ; AltGr + ஆ =  ா
    key <AC02>	{[ U0BB8, U0BB7 ]}; // S = ஸ; Shift + ஸ = ஷ
    key <AC03>	{[ U0BA4 ]};    // D = த
    key <AC04>	{[ U0B8E, U0B8F, U0BC6, U0BC7 ]};   // F = எ; Shift + எ = ஏ; AltGr + எ =  ெ; AltGr + ஏ =  ே
    key <AC05>	{[ U0B99 ]};    // G = ங
    key <AC06>	{[ U0BB9 ]};    // H = ஹ
    key <AC07>	{[ U0B9E, NoSymbol, U0B9C ]};   // J = ஞ; AltGr + ஞ = ஜ
    key <AC08>	{[ U0BE7, U0B83 ]}; // K = ௧; Shift + ௧ = ஃ
    key <AC09>	{[ U0BB2, U0BB3 ]}; // L = ல; Shift + ல = ள

    // Z row
    key <AB01>	{[ U0BB4 ]};    // Z = ழ
    key <AB02>	{[ VoidSymbol ]};   // The X key is disabled as it is not used
    key <AB03>	{[ U0B9A, NoSymbol, U0BB6 ]};   // C = ச; AltGr + ச = ஶ
    key <AB04>	{[ U0BB5 ]};    // V = வ
    key <AB05>	{[ U0BA9, U0BA3 ]}; // B = ன; Shift + ன = ண
    key <AB06>	{[ U0BA8 ]};    // N = ந
    key <AB07>	{[ U0BAE ]};    // M = ம
};
