#include <stdio.h> 
#include <unistd.h>
#include <ncurses.h> 

 

void initNcurses() 

{ 
	initscr(); // basic initiatlization of ncurses (lets ncurses functions do their thing) 
	cbreak(); 
	echo();
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
	char key, brush;
	int size, centerX, centerY;
	int TopBot, LeftRight;
	initNcurses(); 
		
	mvprintw(0,0, "Enter units for Top/Bot: ");
	mvscanw(0,30,"%d", &TopBot);
	mvprintw(1,0, "Enter units for Left/Right: ");
	mvscanw(1,30,"%d", &LeftRight);
	mvprintw(2,0,"How far from the left do you want it: ");
	mvscanw(2,40,"%d", &centerX);
	mvprintw(3,0,"How far from the top do you want it: ");
	mvscanw(3,40,"%d", &centerY);
	printf("What kind of symbol?");
	scanf(" %c", &brush);
	
	drawBox(centerX, centerY, TopBot, LeftRight, brush);
	
	key = getch();
	endwin();// ncurses function to close down ncurses stuff 

}
