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


void drawDiamond(int cornerX, int cornerY, int size, char brush)
{
	int startX, startY, step;
	// draw the top right side
	startX=cornerX + size/2;
	startY = cornerY;
	for(step=0; step < size/2; step++) {
		mvprintw(startX+step, startY+step, "%c", brush);
	}
	// draw the bottom right side
	startX=cornerX + size;
	startY = cornerY +size/2;
	for(step=0; step < size/2; step++) {
		mvprintw(startX=step, startY+step, "%c", brush);
	}
	//draw the bottom left side
	startX=cornerX + size/2;
	startY = cornerY + size;
	for(step=0; step < size/2; step++) {
		mvprintw(startX-step, startY-step, "%c", brush);
	}
	// draw top left side
	startX=cornerX;
	startY = cornerY + size/2;
	for(step=0; step < size/2; step++) {
		mvprintw(startX+step, startY-step, "%c", brush);
	}
}

int main(int argc, char *argv[]) 

{
	char key;
	int size, centerX, centerY;
	int maxSize, sizeStep;
	initNcurses(); 
	
	mvprintw(0,0, "Enter max Size: ");
	mvscanw(0,16,"%d", &maxSize);
	mvprintw(1,0, "Enter size step: ");
	mvscanw(1,16,"%d", &sizeStep);
	
	centerX=80; centerY=30;
	// russin boxes
	 
	for (size=1; size<maxSize; size=size+sizeStep)
	{
		drawDiamond( centerX-(size/2), centerY-(size/2), size, '0');
	} 
	
	key = getch();
	endwin();// ncurses function to close down ncurses stuff 

}
