#include <stdio.h>


int main(int argc, char* argv[])
{
	char userInput[12];
	int x;
	
	printf("Type in a word (12 character limit): ");
	scanf("%s", userInput);
	
	for (x=0; userInput[x]!=0; x++)
	{
		userInput[x] = userInput[x]-1;
	}
	printf("Scrambled Message -> %s\n", userInput);
}
