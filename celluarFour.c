#include <stdio.h>
#include <unistd.h> //for the sleep() function
#include <string.h> // for the satrlen() function
int main(int argc, char* argv[])
{
    char cellGrid[100], nextCellGrid[100];
    int index, numCells;
    // we need to get the initia state of the automata... so let's ask the user
    printf("Please enter the intial cellular automata state...\n");
    scanf("%s", cellGrid);
    numCells = strlen(cellGrid);  //Strlent returns the length of the string given as parameter
    printf("=====================Bellow Is Cell Grid====================\n");

    // copy the original cellGrid into nextCellGrid...
    // go all the way up to index==numCells (1 higher than indx of last charactr in use's string)
    // to make sure we compy the 0 ascii code that mars the end of string
    for( index=0 ; index <= numCells-1; index++ ) {
        nextCellGrid[index] = cellGrid[index];
        }

    // repeat:
    //   print the current cullulat automata state
    //   figure the next cellular automata state
    // Forever
    do {
        printf("%s\n",nextCellGrid);
        // figure out next cellGrid...
        for(index=0; index <= numCells-1; index++) {

            //become same as neighbor to the left
            if (index == 0) {
                nextCellGrid[index] = '.'; // on edge neighbor beyond the edge is dead we become dead
            }
            else {
                nextCellGrid[index] = cellGrid[index-1];
            }
//             [
//            if( cellGrid[index] == '@' ) { cellGrid[index] = '.'; } //if alive, become dead

//            else if( cellGrid[index] == '.' ) { cellGrid[index] = '@'; }; //if dead, become alive
//            ]

//             cellGrid[index] = '@'; //always become alive rule


        }
       //now copy nextCellGrid to cellGrid, to it's ready to be used to figure out the next next cell grid
     for(index=0; index <= numCells-1; index++) {
     cellGrid[index] = nextCellGrid[index];
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
