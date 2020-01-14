#include <stdio.h>

void skipToEndOfLine()
{	
	char c;
	do
	{
		scanf("%c",&c);
	} while (c != '\n'); //repat as long as we have not read new line
}

double ftc(double a)
{
	double ftc;
	ftc = (a-32)/1.8;
	return ftc;
	
}

double ctf(double a)
{
	double ctf;
	ctf = (a*1.8)+32;
	return ctf;
}

char askUserYN(char *question)
{	
	char choice;
	//user input
	do
	{	
		printf("%s", question);
		scanf(" %c", &choice);
		if (choice != 'Y' && choice != 'N' && choice != 'y' && choice != 'n')
		{
			printf("I do not understand.\n");
			skipToEndOfLine();
		}
	} while (choice != 'N' && choice != 'Y' && choice != 'y' && choice != 'n');
	
	return choice;
	
}


int main(int argc, char *argv[])
{
	double a, C, F;
	char degree, degree2, choice;
	
	printf("Welcome to Temp Converter!\n");
	do
	{
		scanf("%lf %c", &a, &degree);
		
		if (degree == 'f' || degree == 'F') {
			C = ftc(a);
			degree2 = 'C';
			printf("Here %.0lf%c\n", C, degree2);
		}
		if (degree == 'c' || degree == 'C') {
			F = ctf(a);
			degree2 = 'F';
			printf("Here %.0lf%c\n", F, degree2);
		} 
		if (degree != 'F' && degree != 'C')
		{
			printf("Dear Customer! Please Use the correct symbols!\n");
			skipToEndOfLine();
		} 
	} while (degree != 'F' && degree != 'C');
	
	choice = askUserYN("Did you like the program? (Y/N)\n");
	if (choice == 'Y' && choice == 'y')
	{
		printf("Thank you\n");
	}
	if (choice == 'n' && choice == 'N')
	{
		printf("Whyyyyyyy!\n");
	}
	
	
	
	
	/*
	int TempNum, TempNum2;
	char TempUnit, TempUnit2;
	
	printf("Temp Converter!\nType a number and use F or C for the temp units: ");
	scanf("%d %c",&TempNum, &TempUnit);
	
	if (TempUnit == 'F' || TempUnit == 'f')
		{
			TempNum2 = (TempNum - 32)/1.8;
			TempUnit2 = 'C';
			if (TempNum2 <=0)
				{
					printf("That's a bit colder than I thought: ");
				}
			else if (TempNum2 >=32)
				{
					printf("That's a bit hot: ");
				}
			else 
				{
					printf("Here's your temp: ");
				}
		}
	else if (TempUnit == 'C' || TempUnit == 'c')
		{
			TempNum2 = (TempNum *1.8)+32;
			TempUnit2 = 'F';
			if (TempNum2 <=32)
				{
					printf("This is american cold: ");
				}
			else if (TempNum2 >=90)
				{
					printf("It's not in true temp form; ");
				}
			else 
				{
					printf("Here's your temp: ");
				}
		}
	
	
	printf("%d%c\n",TempNum2,TempUnit2);
	*/
	//Have some equations
	
	
}
