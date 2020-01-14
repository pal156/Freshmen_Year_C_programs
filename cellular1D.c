#include <stdio.h> 

#include <unistd.h> // for sleep() 

#include <string.h> // for strlen() 

 

int main(int argc, char* argv[]) 

{ 

    char cellGrid[100]; 

    char nextCellGrid[100]; 

    int index, numCells; 

 

    // need to fill the cell grid with the initial state of the cells 

    // let's get that from the user... 

    printf("Please enter the initial automata cells...\n"); 

    scanf("%100s", cellGrid);  // this works unless we want spaces as one the chars of automata 

    numCells = strlen(cellGrid); 

 

    // copy the initial cellGrid into nextCellGrid... 

    // using <= to go extra step to get the 0 ascii code ending the string 

    for(index=0;index <= numCells; index++){   

        nextCellGrid[index] = cellGrid[index]; 

    } 

 

 

    printf("-----------------------------------------------\n"); 

    do { 

        printf("%s\n", nextCellGrid); // print the current state of our automata 

        // now we figure out the next state of each cell 

        // simplest possible rule: no matter what the next state is "alive" 

        for (index=0; index <= numCells-1; index++) { 

            // cellGrid[index] = '@'; // "always become alive" rule 

 

            // if alive, become dead, if dead become alive rule... 

            /* if ( cellGrid[index] == '@' ) { cellGrid[index] = '.'; } 

               else if ( cellGrid[index] == '.' ) { cellGrid[index] = '@'; }; 

            */ 

             

            // become the same as the cell to my left... 

            // if on the edge, assumed the "neighbor" off the edge is empty/dead 

            if ( index == 0 ) { nextCellGrid[index] = '.'; } 

            else nextCellGrid[index] = cellGrid[index-1]; 

        } 

        // copy nextCellGrid in to cellGrid so it's ready for the next step 

        for(index=0;index <= numCells; index++){   

            cellGrid[index] = nextCellGrid[index]; 

        }         

 

        sleep(1); 

    } while (1); 

} 
