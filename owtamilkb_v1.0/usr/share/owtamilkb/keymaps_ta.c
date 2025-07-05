partial alphanumeric_keys
xkb_symbols "owtamilkb" {

    // Name: Ow Tamil Keyboard Layout
    // Description: Easiest keymap ever created for Tamil based on mapping with English letters having similar pronunciation.
    // Encoding: Unicode (http://www.unicode.org)
    // Author: Ganeshan Murugan <coderganesh@github>
    // Date  : Fri July 4 11:55:00 IST 2025
    // Version: 1.0

    name[Group1]= "Tamil (Ow Keyboard)";

    // Q row
    key <AD01>	{[ U0B94, NoSymbol, U0BCC ]};    // Q = ஔ, AltGr + Q = ௌ
    key <AD02>	{[ U0BCD, U0B83 ]}; // W = ், Shift + W = ஃ
    key <AD03>	{[ U0B87, U0B88, U0BBF, U0BC0 ]}; // E = இ, Shift + E = ஈ, AltGr + E = ி, AltGr + Shift + E = ீ
    key <AD04>	{[ U0BB0, U0BB1 ]}; // R = ர, Shift + R = ற
    key <AD05>	{[ U0B9F ]};    // T = ட
    key <AD06>	{[ U0BAF ]};    // Y = ய
    key <AD07>	{[ U0B89, U0B8A, U0BC1, U0BC2 ]};   // U = உ, Shift + U = ஊ, AltGr + U = ு, AltGr + Shift + U = ூ
    key <AD08>	{[ U0B90, NoSymbol, U0BC8 ]};    // I = ஐ, AltGr + I = ை
    key <AD09>	{[ U0B92, U0B93, U0BCA, U0BCB ]};   // O = ஒ, Shift + O = ஓ, AltGr + O = ொ, AltGr + Shift + U = ோ
    key <AD10>	{[ U0BAA ]};    // P = ப

    // A row
    key <AC01>	{[ U0B85, U0B86, NoSymbol, U0BBE ]};    // A = அ, Shift + A = ஆ, AltGr + Shift + A = ா
    key <AC02>	{[ U11338, U11337 ]};   // S = 𑌸, Shift + S = 𑌷
    key <AC03>	{[ U0BA4 ]};    // D = த
    key <AC04>	{[ U0B8E, U0B8F, U0BC6, U0BC7 ]};   // F = எ, Shift + F = ஏ, AltGr + F = ெ, AltGr + Shift + F = ே
    key <AC05>	{[ U0B99 ]};    // G = ங
    key <AC06>	{[ U11339 ]}; // H = 𑌹
    key <AC07>	{[ U0B9E, NoSymbol, U1131C ]};  // J = ஞ, AltGr + J = 𑌜
    key <AC08>	{[ U0BE7 ]};    // K = ௧
    key <AC09>	{[ U0BB2, U0BB3 ]}; // L = ல, Shift + L = ள

    // Z row
    key <AB01>	{[ U0BB4 ]};    // Z = ழ
    key <AB02>	{[ NoSymbol ]}; // X is not used
    key <AB03>	{[ U0B9A ]};    // C = ச
    key <AB04>	{[ U0BB5 ]};    // V = வ
    key <AB05>	{[ U0BA9, U0BA3 ]}; // B = ன, Shift + B = ண
    key <AB06>	{[ U0BA8 ]};    // N = ந
    key <AB07>	{[ U0BAE ]};    // M = ம
};
