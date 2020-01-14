#include <stdio.h> 

 

int main(int argc, char *argv[]) 

{ 

    int down, across; //

    int red, blue; 
    /*
    red means across
    blue means down
    */
	
	printf("Please input two different numbers (put a space to determine differnet numbers)\n");
    scanf("%d %d", &red, &blue); //taking different inputs 

    down=0; 

    do 

    { 

        across=red-1; 

        do 

        { 

            if ( down==0 || down==blue-1 || across==0 || across==red-1 ) 

            { 

                printf("$"); 

            }else //allows to put spaces between the dollar signs to make a box
            
            {
            	printf(" ");
            }  

            if (across == 0) 

            { 

                printf("\n"); 

            } 

            across--;   // means the same as across = across - 1; 

        } while (across >= 0); 

        down++; // means the same as down = down + 1; 

    } while (down<blue); 

} 
