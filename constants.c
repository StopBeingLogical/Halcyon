#include "constants.h"

void init_scrn(void)
{
	int row,col;
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	clear();
}
