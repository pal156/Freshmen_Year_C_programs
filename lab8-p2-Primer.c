#include <stdio.h>
#include <math.h>
#include <unistd.h>

int isPrime(int num)
{	
	int i, n;
	
	for (i=2, i<=num; i++;)
	{	
		if (num % i == 0) 
		{
			return 0;
		}
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int num, num2;
	do
	{
		printf("isPrime(%d) returns %d\n", num, isPrime(num));
		sleep (1);
		num++;
	} while (1);
	
	
}
