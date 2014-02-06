#include <ncurses.h>
#include <stdio.h>
#include <string.h>

int main(){	
	int height;							/* The height of the spaceship. */
	int speed;							/* The speed of the spaceship. */
	char title[]="Lunar Lander - Version 0.0.1";
	char license[]="Licensed under the GPLv2.";
	char start[]="Press any key to start.";
	int row,col;							/* store the number of rows and */
							                /* the number of colums of the screen, */
	initscr();					                /* start the curses mode, */
	getmaxyx(stdscr,row,col);					/* get the number of rows and columns, */
	mvprintw(row/2,(col-strlen(title))/2,"%s",title);		/* print the message at the center of the screen */
	mvprintw(row-2,(col-strlen(license))/2,"%s",license);
	mvprintw(row-1,(col-strlen(start))/2,"%s",start);
	refresh();
	getch();
	endwin();							/* End Curses Mode.*/
	printf("THIS IS A COMPUTER SIMULATION OF AN APOLLO LUNAR LANDING CAPSULE.\n");
	printf("THE ON-BOARD COMPUTER HAS FAILED SO YOU HAVE TO LAND THE CAPSULE MANUALLY.\n");
	printf("SET BURN RATE OF RETRO ROCKETS TO ANY VALUE BETWEEN 0 (FREE FALL) AND 200 (MAXIMUM BURN) POUNDS PER SECOND.\n");
	printf("SET NEW BURN RATE EVERY 10 SECONDS.\n");
	printf("CAPSULE WEIGHT 32,500 LBS; FUEL WEIGHT 16,500 LBS.\n");
	
	/*THIS IS JUST FOR TESTING!*/
	speed=0;
	height=0;
	
	if(height<=0){
		if(speed>10){
			printf("There were no survivors.");
		}
		else if(speed<10){
			printf("Your spaceship crashed. Looks like you're stranded here.");
		}
		else if(speed=0){
			printf("You did it! Great job!");
		}
	}
	return 0;
}
