#include <sys/curses.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int c = ' ',i = 0;

	initsrc();
	cbreak();
	noecho();

	mvprintw(0,0,"Press 'q' to qut\n");
	refresh();

	while(c != 'q')
		if(kbhit()){
			c = getch();
			mvprintw(1,0,"got char '%c' on iteration %d\n",c ++i);
			refresh();
		}
	nocbreak():
			echo();
	endwin();
}
