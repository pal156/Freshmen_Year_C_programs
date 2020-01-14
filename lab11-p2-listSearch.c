#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// with the help of Kayden Paplow and Theo Bergmeam
int main(int argc, char *argv[])
{

	
	int userList, userGuess, x;
	int match, matchTally, rejectTally;
	char choice;
	int scores[1000];
	
	printf("How long do you want your list to be?\n");
	scanf("%d", &userList);
	srand(time(NULL));
	
	if (userList <=1000)
	{
		for(x=0; x<userList-1; x++) {
			
			scores[x] = rand()%100;
			//printf("%d\n", scores[x]);
			matchTally=0;
			rejectTally=0;
		}
		
		do
		{
			printf("Type a number here and see if it matches inside the list (hint its between 100)\n");
			scanf("%d", &userGuess);
			
			match=0;
			
			for (x=0; x<userList; x++) {
				if ( userGuess == scores[x])
				{
					printf("You got a mach!\n");
					match=1;
					matchTally++;
				}
				else if ( x ==userList-1 && userGuess !=scores[x] && match ==0)
				{
					printf("No matches were found \n");
					rejectTally++;
				}
			}
			printf("Number of matches -> %d\n", matchTally);
			printf("Number of rejections -> %d\n", rejectTally);
			printf("Do you want to guess again?\n");
			scanf(" %c", &choice);
		} while (choice == 'Y' || choice == 'y'); 
	}
}
