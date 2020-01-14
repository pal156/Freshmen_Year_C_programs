#include <stdio.h>
#include <unistd.h>


int collatzStepEven(int n)
{
	int collatzStepEven;
	collatzStepEven = n/2;
	return collatzStepEven;
	
}

int collatzStepOdd(int n)
{
	int collatzStepOdd;
	collatzStepOdd = 3*n+1;
	return collatzStepOdd;
}

int main(int argc, char *argv[])
{
	int n;
	
	
	printf("Welcome to the 3n+1 Game!\nPlease Enter a whole number: ");
	scanf("%d", &n);
	do
		{
		if (n%2 == 0) //checks it even or not
		{
			n = collatzStepEven(n);
		}
		else
		{
			n = collatzStepOdd(n);
		}
		printf("%d\n", n);
		sleep (1);
	} while (n != 1);
	printf("That's all :D\n");
}
