#include "screen.h"
#include <string>
#include <iostream>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define VC_EXTRALEAN
#include <Windows.h>
#endif // _WIN32

using namespace std;

#define color_black      0
#define color_dark_blue  1
#define color_dark_green 2
#define color_light_blue 3
#define color_dark_red   4
#define color_magenta    5
#define color_orange     6
#define color_light_gray 7
#define color_gray       8
#define color_blue       9
#define color_green     10
#define color_cyan      11
#define color_red       12
#define color_pink      13
#define color_yellow    14
#define color_white     15

void print(const string s="") {
    cout << s << endl;
}
void print(const string s, const int textcolor, const int backgroundcolor) {
#if defined(_WIN32)
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    WORD default_colors = 0;
    if(GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) default_colors = csbi.wAttributes;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backgroundcolor<<4|textcolor);
#elif defined(__linux__)
    string t, b;
    switch(textcolor) {
        case  0: t="30"; break; // color_black      0
        case  1: t="34"; break; // color_dark_blue  1
        case  2: t="32"; break; // color_dark_green 2
        case  3: t="36"; break; // color_light_blue 3
        case  4: t="31"; break; // color_dark_red   4
        case  5: t="35"; break; // color_magenta    5
        case  6: t="33"; break; // color_orange     6
        case  7: t="37"; break; // color_light_gray 7
        case  8: t="90"; break; // color_gray       8
        case  9: t="94"; break; // color_blue       9
        case 10: t="92"; break; // color_green     10
        case 11: t="96"; break; // color_cyan      11
        case 12: t="91"; break; // color_red       12
        case 13: t="95"; break; // color_pink      13
        case 14: t="93"; break; // color_yellow    14
        case 15: t="97"; break; // color_white     15
        default: t="97";
    }
    switch(backgroundcolor) {
        case  0: b= "40"; break; // color_black      0
        case  1: b= "44"; break; // color_dark_blue  1
        case  2: b= "42"; break; // color_dark_green 2
        case  3: b= "46"; break; // color_light_blue 3
        case  4: b= "41"; break; // color_dark_red   4
        case  5: b= "45"; break; // color_magenta    5
        case  6: b= "43"; break; // color_orange     6
        case  7: b= "47"; break; // color_light_gray 7
        case  8: b="100"; break; // color_gray       8
        case  9: b="104"; break; // color_blue       9
        case 10: b="102"; break; // color_green     10
        case 11: b="106"; break; // color_cyan      11
        case 12: b="101"; break; // color_red       12
        case 13: b="105"; break; // color_pink      13
        case 14: b="103"; break; // color_yellow    14
        case 15: b="107"; break; // color_white     15
        default: b= "40";
    }
    cout << "\033["+t+";"+b+"m";
#endif // Windows/Linux
    cout << s;
#if defined(_WIN32)
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), default_colors);
#elif defined(__linux__)
    cout << "\033[0m"; // reset color
#endif // Windows/Linux
}

void print_color_test() {
    print(" ", color_black, color_magenta   );
    print(" ", color_black, color_blue      );
    print(" ", color_black, color_light_blue);
    print(" ", color_black, color_cyan      );
    print(" ", color_black, color_green     );
    print(" ", color_black, color_yellow    );
    print(" ", color_black, color_orange    );
    print(" ", color_black, color_red       );
    print();
    print(" ", color_black, color_black     );
    print(" ", color_black, color_gray      );
    print(" ", color_black, color_light_gray);
    print(" ", color_black, color_white     );
    print(" ", color_black, color_pink      );
    print(" ", color_black, color_dark_blue );
    print(" ", color_black, color_dark_green);
    print(" ", color_black, color_dark_red  );
    print();
    print("#", color_magenta   , color_black);
    print("#", color_blue      , color_black);
    print("#", color_light_blue, color_black);
    print("#", color_cyan      , color_black);
    print("#", color_green     , color_black);
    print("#", color_yellow    , color_black);
    print("#", color_orange    , color_black);
    print("#", color_red       , color_black);
    print();
    print("#", color_black     , color_black);
    print("#", color_gray      , color_black);
    print("#", color_light_gray, color_black);
    print("#", color_white     , color_black);
    print("#", color_pink      , color_black);
    print("#", color_dark_blue , color_black);
    print("#", color_dark_green, color_black);
    print("#", color_dark_red  , color_black);
    print();
}

int screen() {
    print("test");
    print_color_test();
    print("test\n");

    print("Hello", color_green, color_red);
    print("Bye", color_red, color_green);
    return 0;
}