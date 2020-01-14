#include <stdio.h>
#include <string.h>

// Gotta thank caleb for helping me

void lineofSymbols(double length, char symbol, double scale)
{
    int i;
    for(i=0; i < (length*scale) - 0.5; i++) printf("%c", symbol); 
}// Counts the letters and count different kinds of letters too

 int main()
 {
     int i = 0, k, len = 0, count = 0;
     float per = 0;
     char str[1024] = {0}; // A string that lets me have user input
     char x, y; 

     printf("Enter text, when done type '!': "); // Tell user that about text

     for(i = 0; str[i - 1] != '!'; i++)
         scanf("%c", &str[i]);

     printf("%s\n", str); 

     for(i = 0; str[i - 1] != '!'; i++)
     {
     if(str[i] == ' ')
             {

             }
     else{
         len++;
     }
     }

     len--;

     for(x = 'a', y = 'A'; x <= 'z'; x++, y++) // This makes it so that it will read the letter we have written down
     {
         for(i = 0; str[i - 1] != '!'; i++)
         {
             if(str[i] == x)
             {
                 count++;
             }
             if(str[i] == y)
             {
                 count++;
             } // We have 2 if statements, one to read capital letters and the other to read lowercase letters. Then adds it to the count for that specific variable
         }
     if(count != 0)
     {
         per = (double) count /len * 100;
         printf("%d %c's, %3.4lf%% :", count, y, per);
         lineofSymbols(per, '>', 1.0);
         printf("\n");
         per = 0;
         count = 0; // Makes it so hat we can have a graph and percent for the letters used
         }
     }

     printf("length: %d\n", len); // Helps us by telling us how long it is

     return 0;
 }
