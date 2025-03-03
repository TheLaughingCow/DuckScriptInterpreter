#pragma once

#ifdef LOCALE_win_fr

    {"win_fr",
     {
        {"a", USBKeyDefinition(0x14)},
        {"A", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x14)},
        {"z", USBKeyDefinition(0x1d)},
        {"Z", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x1d)},
        {"e", USBKeyDefinition(0x08)},
        {"E", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x08)},
        {"r", USBKeyDefinition(0x15)},
        {"R", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x15)},
        {"t", USBKeyDefinition(0x17)},
        {"T", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x17)},
        {"y", USBKeyDefinition(0x1c)},
        {"Y", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x1c)},
        {"u", USBKeyDefinition(0x18)},
        {"U", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x18)},
        {"i", USBKeyDefinition(0x0c)},
        {"I", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x0c)},
        {"o", USBKeyDefinition(0x12)},
        {"O", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x12)},
        {"p", USBKeyDefinition(0x13)},
        {"P", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x13)},
        {"q", USBKeyDefinition(0x04)},
        {"Q", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x04)},
        {"s", USBKeyDefinition(0x16)},
        {"S", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x16)},
        {"d", USBKeyDefinition(0x07)},
        {"D", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x07)},
        {"f", USBKeyDefinition(0x09)},
        {"F", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x09)},
        {"g", USBKeyDefinition(0x0a)},
        {"G", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x0a)},
        {"h", USBKeyDefinition(0x0b)},
        {"H", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x0b)},
        {"j", USBKeyDefinition(0x0d)},
        {"J", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x0d)},
        {"k", USBKeyDefinition(0x0e)},
        {"K", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x0e)},
        {"l", USBKeyDefinition(0x0f)},
        {"L", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x0f)},
        {"m", USBKeyDefinition(0x10)},
        {"M", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x10)},
        {"w", USBKeyDefinition(0x1a)},
        {"W", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x1a)},
        {"x", USBKeyDefinition(0x1b)},
        {"X", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x1b)},
        {"c", USBKeyDefinition(0x06)},
        {"C", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x06)},
        {"v", USBKeyDefinition(0x19)},
        {"V", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x19)},
        {"b", USBKeyDefinition(0x05)},
        {"B", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x05)},
        {"n", USBKeyDefinition(0x11)},
        {"N", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x11)},
    
        // Chiffres et symboles (sans Shift)
        {"&", USBKeyDefinition(0x1e)},  // 1
        {"é", USBKeyDefinition(0x1f)},  // 2
        {"\"", USBKeyDefinition(0x20)}, // 3
        {"'", USBKeyDefinition(0x21)},  // 4
        {"(", USBKeyDefinition(0x22)},  // 5
        {"-", USBKeyDefinition(0x23)},  // 6
        {"è", USBKeyDefinition(0x24)},  // 7
        {"_", USBKeyDefinition(0x25)},  // 8
        {"ç", USBKeyDefinition(0x26)},  // 9
        {"à", USBKeyDefinition(0x27)},  // 0
        {")", USBKeyDefinition(0x2d)},
        {"=", USBKeyDefinition(0x2e)},
        {" ", USBKeyDefinition(0x2c)},
        
        // Chiffres avec Shift
        {"1", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x1e)},
        {"2", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x1f)},
        {"3", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x20)},
        {"4", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x21)},
        {"5", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x22)},
        {"6", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x23)},
        {"7", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x24)},
        {"8", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x25)},
        {"9", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x26)},
        {"0", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x27)},
        
        // Autres caractères
        {",", USBKeyDefinition(0x36)},
        {";", USBKeyDefinition(0x33)},
        {":", USBKeyDefinition(0x33)},
        {"!", USBKeyDefinition(0x38)},
        {"ù", USBKeyDefinition(0x2f)},
        {"*", USBKeyDefinition(0x30)},
        {"$", USBKeyDefinition(0x21)},
        {"^", USBKeyDefinition(0x2f)},
        
        // Symboles nécessitant AltGr
        {"@", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x1f)},
        {"#", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x20)},
        {"{", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x21)},
        {"[", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x22)},
        {"|", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x23)},
        {"`", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x24)},
        {"\\", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x25)},
        {"€", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x08)},
        
        // Autres symboles
        {"/", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x38)},
        {"?", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x2d)},
        {"²", USBKeyDefinition(0x35)},
        {"~", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x2e)},
        {"§", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x1f)},
        {"%", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x24)},
        {"µ", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x10)},
        {"\"", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x20)},
        {"£", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::RightAlt, 0x1f)},
        {"°", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x35)},
        {"+", USBKeyDefinition(USBKeyDefinition::UsbHidModifiers::LeftShift, 0x2e)},
        
     }},

#endif
