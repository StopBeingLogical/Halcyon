#include "constants.h"


void map(void)
{
	int row,col;
	clear();
	getmaxyx(stdscr,row,col);
	move( 0, col/2 );
	vline( ACS_VLINE, row );
	move( row/2, 0 );
	hline( ACS_HLINE, col );

	refresh();
	getch();

}
