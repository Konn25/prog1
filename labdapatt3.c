#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>

int main (void)
{

	int xj = 0;
	int xk = 0;
	int yj = 0;
        int yk = 0;
	int mx = 160;
	int my = 48;
	
	WINDOW *ablak;
	ablak = initscr();

	for (;;)
	{
		xj = (xj - 1) % mx;
		xk = (xk + 1) % mx;
		yj = (yj - 1) % my;
		yk = (yk + 1) % my;
		
		clear ();
		mvprintw(0,0,
		"x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");

		mvprintw (24, 0,
		"x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");

		mvprintw (abs ( (yj + (my - yk) ) /2 ), abs ( (xj + (mx - xk) ) /2 ), "0");

		refresh();

		usleep(100000);

	}



}


