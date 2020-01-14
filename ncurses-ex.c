#include <stdio.h> 

#include <ncurses.h> 

 

void initNcurses() 

{ 

    initscr(); // basic initiatlization of ncurses (lets ncurses functions do their thing) 

    cbreak(); 

    noecho(); 

    timeout(-1); // use -1 if you want getch() to wait for user input, 0 if you don't want it to wait 

} 

 

 

int main(int argc, char *argv[]) 

{ 

    char key; 

    initNcurses(); 

    printf("Can't see me!\n"); 

    move(5,20);// move() function provided by ncurses:  positions the cursor 

    printw("=[:)]>"); //works like printf
    				// except it starts prints at the current curose position
    				// that was determine by the last move() function
    
    move(15,50); 

    printw("=[:)]>"); 

    key = getch(); 

    endwin();// ncurses function to close down ncurses stuff 

}
