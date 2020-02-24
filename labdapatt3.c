#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>

int main (void)
{

	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
        int y2 = 0;
	int maxX = 160;
	int maxY = 48;
	
	WINDOW *ablak;
	ablak = initscr();

	for (;;)
	{
		x1 = (x1 - 1) % maxX;
		x2 = (x2 + 1) % maxX;
		y1 = (y1 - 1) % maxY;
		y2 = (y2 + 1) % maxY;
		
		clear ();
		mvprintw(0,0,
		"x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");

		mvprintw (24, 0,
		"x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");

		mvprintw (abs ( (y1 + (maxY - y2) ) /2 ), abs ( (x1 + (maxX - x2) ) /2 ), "0");

		refresh();

		usleep(100000);

	}



}


