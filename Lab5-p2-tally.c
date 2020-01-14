#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2, total;
	char symbol;
	
	total = 0;
	
	printf("Welcome to Tally machine (Pretty much a calcuator with memory :D)\n");
	
	do
	{	
		printf("= %d\n",total); //prints 0
		
		scanf(" %c", &symbol); //takes input of characters
		if (symbol == 'c') //if symbol equals to c it will clear it to 0
		{
		total = 0;
		}
		if (symbol == 'x') // to break out of the do loop
		{
		break;
		}
		if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
		{
			scanf(" %d",&num1); // take in number input
			
			if (symbol == '+') //addiction statement
			{
				total = total + num1;
			}
			if (symbol == '-') //subtraction statement
			{
				total = total - num1;
			}
			if (symbol == '*') // mulicapltion statement
			{
				total = total * num1;
			}
			if (symbol == '/') //divison statemnt
			{
				total = total / num1;
			}
		}
	}while (symbol = 1); //so the while loop remains true until the break action
	printf("Thank you and have a nice day\n");
	
}
