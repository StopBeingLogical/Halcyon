#include "constants.h"

int main()                                                                                  
{                                                                                           
	/* Initiate the ncurses screen */
	init_scrn();

	/* Display the intro screen */
	intro();
	
	/* Show the map */
	map();

	/* Restore the terminal so it doesn't go to hell when exiting */
	endwin();	

	/* Exit gracefully */
	return 0;

}                                                                                          
