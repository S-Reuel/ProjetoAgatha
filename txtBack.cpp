#include <windows.h>
#include <stdio.h>

#ifndef COLORS_ENUM_DEFINED
#define COLORS_ENUM_DEFINED

//enum COLORS {
//    BLACK = 0,
//    BLUE,
//    GREEN,
//    CYAN,
//    RED,
//    MAGENTA,
//    YELLOW,
//    WHITE
//};

void textbackground(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD currentAttributes;

    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    currentAttributes = consoleInfo.wAttributes;

    // Remove bits de fundo antigos (os 4 mais significativos)
    currentAttributes &= 0x0F;

    // Define novo fundo
    WORD background = color << 4;
    SetConsoleTextAttribute(hConsole, currentAttributes | background);
}

void resetcolor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

#endif
