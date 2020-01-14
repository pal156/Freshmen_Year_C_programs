#include <stdio.h>


int main(int argc, char *argv[])
{
//type '&' in front variable names in scanf
	int a,b,c; 
	// a = "Starting point"
	// b = "end point"
	// c = change in rate
	
	char d;
	printf("where should I start?\n");
	scanf("%d",&a);
	
	printf("Where should I end?\n");
	scanf("%d",&b);
	
	printf("How big the steps I should I take? \n");
	scanf("%d",&c);
	if (a<b)
	{
	do
		{
		printf("%d\n", a);
		a = a+c;
	
		}while (a+c <=b);
	}
	else
	{
	do
		{
		printf("%d\n", a);
		a = a-c;
		}while (a-c >=b);
	
	}
}
