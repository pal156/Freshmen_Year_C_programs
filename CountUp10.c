#include <stdio.h>


int main(int argc, char* argv[])
{
	int count; 
	
	printf("I can count up to 130 but in 10s...\n");
	
	count = 10; //All I change was switch the value to 10
	
	do
	{
		printf("%d\n" ,count);
		count = count + 10; //While having the count + 10 instead of 1
	} while (count <= 130);

	printf("Arn't ya impress?\n");
}
