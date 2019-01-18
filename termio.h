/* ===== Termio.h ================= */
/* Console control for conio lovers */
/* (using ANSI escape codes)        */
/*                                  */
/* Tested on Linux - other OSes may */
/* not interpret the sequences      */
/* correctly...                     */

// We utilize iostream and printf. How redundant.
#include <cstdio>
#include <iostream>
using namespace std;

#define clrscr() printf("\033[2J\033[1;1H") // Clears screen and resets cursor
#define gotoxy(x, y) cout << "\033[" << y << ";" << x << "H"
#define textbackground(color) cout << "\033[48;5;" << color << "m"
#define setBkgColor(color) textbackground(color) //Alternate spelling
#define textcolor(color) cout << "\033[38;5;" << color << "m"
#define setTxtColor(color) textcolor(color) //Alternate spelling

#define cleanup() printf("\033[1G \033[m")
