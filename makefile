tycoon: tycoon.o constants.o intro_screen.o map.o
	gcc -o tycoon tycoon.o constants.o intro_screen.o map.o -lncurses

tycoon.o : tycoon.c constants.h
	gcc -c tycoon.c

constants.o : constants.c constants.h
	gcc -c constants.c

intro_screen.o : intro_screen.c intro_screen.h constants.h
	gcc -c intro_screen.c

map.o : map.c map.h constants.h
	gcc -c map.c

clean :
	rm tycoon tycoon.o constants.o intro_screen.o map.o
