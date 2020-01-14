#include <stdio.h>
#include <unistd.h> //for the sleep() function
#include <string.h> // for the satrlen() function
int main(int argc, char* argv[])
{
    char cellGrid[100];
    int index, numCells;
    // we need to get the initia state of the automata... so let's ask the user
    printf("Please enter the intial cellular automata state...\n");
    scanf("%s", cellGrid);
    numCells = strlen(cellGrid);  //Strlent returns the length of the string given as parameter
    printf("-----------------------Below Is Cell Grid-----------------------\n");


    // repeat:
    //   print the current cullulat automata state
    //   figure the next cellular automata state
    // Forever
    do {
        printf("%s\n",cellGrid);
        // figure out next cellGrid...
        for(index=0; index <= numCells-1; index++) {

            //become same as neighbor to the left
            if (index == 0) {
                cellGrid[index] = '.'; // on edge neighbor beyond the edge is dead we become dead
            }
            else {
                cellGrid[index] = cellGrid[index-1];
            }

//             [
//            if( cellGrid[index] == '@' ) { cellGrid[index] = '.'; } //if alive, become dead

//            else if( cellGrid[index] == '.' ) { cellGrid[index] = '@'; }; //if dead, become alive
//            ]

//             cellGrid[index] = '@'; //always become alive rule


        }


    usleep(1000000);
    } while (1);

}
/*
    easiest to use a text string to represent our 1D cellular grid

    cellGrid:   "...@..@...@@@@@."

    simplest rules: "they stay the same" or "always become alive" or "always stay dead"

    slightly more complicated rule: if dead become alive. if alive become dead. 

    slightly more more intresting rule: become the same as neighbor to the left.
                                                                (on edges, assume neighbor is dead)
*/
