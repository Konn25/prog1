#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main (void)
{
	struct winsize w;
    	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

	int xj = 0;
	int xk = 0;
	int yj = 0;
        int yk = 0;
	int mx = w.ws_col;
	int my = w.ws_row;;
	
	WINDOW *ablak;
	ablak = initscr();

	for (;;)
	{
		xj = (xj - 1) % mx;
		xk = (xk + 1) % mx;
		yj = (yj - 1) % my;
		yk = (yk + 1) % my;
		
		clear ();
		/*mvprintw(0,0,
		"--------------------------------------------------------------------------------");

		mvprintw (24, 0,
		"--------------------------------------------------------------------------------");*/

		mvprintw (abs ((yj + (my - yk))),abs ((xj + (mx - xk))), "0");

		refresh();

		usleep(100000);

	}

	

    	//printf ("lines %d\n", w.ws_row);
    	//printf ("columns %d\n", w.ws_col);

	

		

    	//return 0;

}


