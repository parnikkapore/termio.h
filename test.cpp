/*
    TASK: Tester
    LANG: CPP
    AUTHOR: Parnikkapore
    VENV: Private
*/
#include<bits/stdc++.h>
using namespace std;

//Oneliners are presented as macros to reduce overhead
#define clrscr() printf("\033[2J\033[1;1H") // Clears screen and resets cursor
#define gotoxy(x, y) cout << "\033[" << y << ";" << x << "H"
#define textbackground(color) cout << "\033[48;5;" << color << "m"
#define setBkgColor(color) textbackground(color) //Alternate spelling
#define textcolor(color) cout << "\033[38;5;" << color << "m"
#define setTxtColor(color) textcolor(color)
#define cleanup() printf("\033[1G \033[m")

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
