#include <stdio.h>


int main(int argc, char* argv[])
{
	int count; 
	
	printf("I can count up to 13...\n");
			//Singole equal sign = store the variable on the left
	count = 1;
	
	do
	{
		printf("%d\n" ,count);
		count = count + 1;
	} while (count <= 13);

	printf("Arn't ya impress?\n");
}
