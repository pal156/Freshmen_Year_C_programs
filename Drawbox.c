#include <stdio.h> 
#include <unistd.h>
#include <ncurses.h> 

 

void initNcurses() 

{ 
	initscr(); // basic initiatlization of ncurses (lets ncurses functions do their thing) 
	cbreak(); 
	noecho();
	timeout(-1); // use -1 if you want getch() to wait for user input, 0 if you don't want it to wait 

}

/*
	function: drawBox()
		parameters:
		X,Y for the position of box
		height, width
		symbol
		return:
			void
		purpose:
			draws a box ofthe specified size, at specified location 
			with specified
*/
void drawBox(int xPos, int yPos, int height,int width, char brush)
{
	int x, y;
	move(yPos,xPos); // move to the top left corner of where our box will be
	// print the left side
	for (y=0; y<height; y=y+1){
		move(yPos+y, xPos);
		printw("%c", brush);
		refresh(); // refresh() forces latest change to be visible
		usleep(40000);
	}
	//print the bottom
	for (x=0; x<width; x++) {
		move ( yPos+height-1, xPos + x);
		printw ("%c", brush);
		refresh();
		usleep(40000);
	}
	// print the right side
	for (y=0; y<height; y=y+1) {
		move(yPos+height-1-y, xPos+width-1);
		printw("%c", brush);
		refresh();
		usleep(40000);
	}
	// print the top
	for (x=0; x<width; x++) {
		move( yPos, xPos+width-1-x);
		printw("%c", brush);
		refresh();
		usleep(40000);
	}
}


int main(int argc, char *argv[]) 

{
	char key;
	initNcurses(); 
	drawBox(40,10,12,18, 'e');
	
	key = getch();
	endwin();// ncurses function to close down ncurses stuff 

}
