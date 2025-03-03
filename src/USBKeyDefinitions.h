#pragma once

static constexpr const char *UP = "UP";
static constexpr const char *DOWN = "DOWN";
static constexpr const char *LEFT = "LEFT";
static constexpr const char *RIGHT = "RIGHT";
static constexpr const char *UPARROW = "UPARROW";
static constexpr const char *DOWNARROW = "DOWNARROW";
static constexpr const char *LEFTARROW = "LEFTARROW";
static constexpr const char *RIGHTARROW = "RIGHTARROW";
static constexpr const char *PAGEUP = "PAGEUP";
static constexpr const char *PAGEDOWN = "PAGEDOWN";
static constexpr const char *HOME = "HOME";
static constexpr const char *END = "END";
static constexpr const char *INSERT = "INSERT";
static constexpr const char *DELETE = "DELETE";
static constexpr const char *DEL = "DEL";
static constexpr const char *BACKSPACE = "BACKSPACE";
static constexpr const char *TAB = "TAB";
static constexpr const char *SPACE = "SPACE";
static constexpr const char *ENTER = "ENTER";
static constexpr const char *ESCAPE = "ESCAPE";
static constexpr const char *PAUSE = "PAUSE";
static constexpr const char *BREAK = "BREAK";
static constexpr const char *PRINTSCREEN = "PRINTSCREEN";
static constexpr const char *MENU_APP = "MENU APP";
static constexpr const char *F1 = "F1";
static constexpr const char *F2 = "F2";
static constexpr const char *F3 = "F3";
static constexpr const char *F4 = "F4";
static constexpr const char *F5 = "F5";
static constexpr const char *F6 = "F6";
static constexpr const char *F7 = "F7";
static constexpr const char *F8 = "F8";
static constexpr const char *F9 = "F9";
static constexpr const char *F10 = "F10";
static constexpr const char *F11 = "F11";
static constexpr const char *F12 = "F12";
static constexpr const char *SHIFT = "SHIFT";
static constexpr const char *ALT = "ALT";
static constexpr const char *CONTROL = "CONTROL";
static constexpr const char *CTRL = "CTRL";
static constexpr const char *COMMAND = "COMMAND";
static constexpr const char *WINDOWS = "WINDOWS";
static constexpr const char *GUI = "GUI";
static constexpr const char *CAPSLOCK = "CAPSLOCK";
static constexpr const char *NUMLOCK = "NUMLOCK";
static constexpr const char *SCROLLOCK = "SCROLLOCK";
static constexpr const uint8_t SHIFT_KEY = 0xe1;

static std::unordered_map<std::string, USBKeyDefinition> keyLookupTable = {
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



static std::vector<const char *> systemKeys =
    {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        UPARROW,
        DOWNARROW,
        LEFTARROW,
        RIGHTARROW,
        PAGEUP,
        PAGEDOWN,
        HOME,
        END,
        INSERT,
        DELETE,
        DEL,
        BACKSPACE,
        TAB,
        SPACE,
        ENTER,
        ESCAPE,
        PAUSE,
        BREAK,
        PRINTSCREEN,
        MENU_APP,
        F1,
        F2,
        F3,
        F4,
        F5,
        F6,
        F7,
        F8,
        F9,
        F10,
        F11,
        F12,
        SHIFT,
        ALT,
        CONTROL,
        CTRL,
        COMMAND,
        WINDOWS,
        GUI,
        CAPSLOCK,
        NUMLOCK,
        SCROLLOCK};
