#include <stdio.h> 

#include <math.h>


double isPerfectSquare(double x) //the function that does the squaring
{
	double square;
	square = sqrt(x);

	return square;
}

int main(int argc, char* argv[]) 

{
	int x, countSquare, countNot; // x is to take the number for square
	double square; //only here to see numbers pass the decimeals other wises it rounds
	char choice; // yes and no choice 
	countSquare = 0; // gotta start some where and the programs will know its 0 at first
	countNot = 0; // gotta start some where and the programs will know its 0 at first
	//greets user and instructions
	printf("Hello and a Welcome to the Perfect Square charts. What's in the program you may ask?\nBasically its function is to count how many perfect squares you have!\n");
	
	do { // so I can keep repeating it to count
		printf("Please Input a number!\n");
		scanf("%d", &x);

		square = isPerfectSquare(x);
		if ( square*square == x ) //allows Perfect squares to be printable
		{
			printf("Square root of %d = %lf\n", x, square); // to let user know it worked
			countSquare++; // adds one for correct squares
		}
		else // non perfect squares goes here if it does not meet the requirement
		{
			printf("Unacceptable! Not Sqaurable!\n"); //memeable and let user know it failed
			countNot++; // adds one fore not perfect squares
		}
		printf("Would you like to do it again?\n"); // prompts user a question
		scanf(" %c", &choice); // takes user input
	} while (choice == 'Y' || choice =='y'); // only accepts these fine letters
	printf("Tally Marks!\n======================\n"); // to let the user how many it got squares or not
	printf("Perfect Square numbers %d\nNot Perfect Square numbers %d\n", countSquare, countNot);
}
