#include <stdio.h> 

int main(int argc, char *argv[]) 

{ 

    int down, across; 

    int red, blue; 
    /*
    red means across
    blue means down
    */
    
    printf("Please input two different numbers (put a space to determine differnet numbers)\n");

    scanf("%d %d", &red, &blue); //taking two differnet inputs

    down=0; 

    across=0; 

    do //the loop will keep printing H's till condiction fails

    { 

        printf("H"); 

        across++; 

    } while (across < red); 

    printf("\n"); 

    do //print H's down and another one across with spaces in the middle

    { 

        printf("H"); 

        across = 1; 

        do 

        { 

            printf(" "); 

            across++; 

        } while(across < red-1); 

        printf("H\n");

        down++; 

    } while (down<blue); 

    do 

    { 

        printf("H"); 

        across--; 

    } while (across >0 ); 

    printf("H\n"); //fixes missing H

} 
