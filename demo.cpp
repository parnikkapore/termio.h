/* Termio.h tester */

#include <bits/stdc++.h>
#include "termio.h"

int main()
{
    clrscr();
    printf("Welcome to C++!\n");
    gotoxy(10,5); printf("Can your terminal do this?\n");
    setBkgColor(17); printf("Setting the background color\n");
    textcolor(84); printf("And then the foreground color\n");
    cleanup();
    return 0;
}
