#include <ncurses.h>
#include <stdio.h>
#include <string.h>

int main()
{	int ch;

 char title[]="Lunar Lander - Version 0.0.1";
 char license[]="Licensed under the GPLv2.";
 char start[]="Press any key to start.";
 int row,col;											                    /* to store the number of rows and */
														                          /* the number of colums of the screen, */
 initscr();												                    /* start the curses mode, */
 getmaxyx(stdscr,row,col);								            /* get the number of rows and columns, */
 mvprintw(row/2,(col-strlen(title))/2,"%s",title);		/* print the message at the center of the screen */
 mvprintw(row-2,(col-strlen(license))/2,"%s",license);
 mvprintw(row-1,(col-strlen(start))/2,"%s",start);
 refresh();
 getch();
 clear();
 printw("Hier kommt dann das Programm rein!");
 refresh();
 getch();
 endwin();

 return 0;

}
