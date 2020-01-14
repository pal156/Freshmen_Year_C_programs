#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>

void Ncurses()
{
	initscr();
	cbreak();
	echo();
	timeout(-1);
}

void Move(int x, int y, char brush)
{
	int startX, startY, step;
	
	startX=x;
	startY=y;
	for (step=0;step;step++)
	{
		mvprintw(startY + step, startX+step, " %c", brush);
		usleep(2000);
		refresh();
	}
}

int main(int argc, char *argv[])
{
	int xPos, yPos, speed, yStep;
	int topBoundary=1, bottomBoundary=30, leftBoundary=10, rightBoundary=60;
	char key;
	Ncurses();
	speed =1;
	xPos = leftBoundary;
	yPos = topBoundary;
	do
	{
		clear();
		move(yPos, xPos);
		printw("Cho~Chooo\n");
		xPos = xPos + yStep;
		yPos = yPos + yStep;
		refresh();
		usleep(35000);
		
		if (xPos >= bottomBoundary ) {
			yStep = -speed;
			xPos = bottomBoundary;
		}
		if (xPos <= topBoundary) {
			yStep = speed;
			xPos =topBoundary;
		}
		if (yPos >= rightBoundary ) {
			yStep = -speed;
			yPos = rightBoundary;
		}
		if (yPos <= leftBoundary) {
			yStep = speed;
			yPos =leftBoundary;
		}
	}while (1);
	key =getch();
	endwin();
}
