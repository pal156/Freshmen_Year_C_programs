#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2, num3;
	char symbol, choice;
	
	do
	{
		num3 = 0;
		printf("Dear user, please input a starting number.\n");
		scanf("%d",&num1);
		
		printf("Input the changing number.\n");
		scanf("%d",&num2);
		
		printf("Input what kind of operation, addition, subtraction, multiplcation, or division. (please use their symbols).\n");
		scanf(" %c",&symbol);
	
		if(symbol == '+')
		{
			printf("Here is your sum.\n");
			num3 = num1 + num2;
			printf("%d\n",num3);
		}
		if(symbol == '-')
		{
			printf("Here is your difference.\n");
			num3 = num1 - num2;
			printf("%d\n",num3);
		}
		if(symbol == '*') 
		{
			printf("Here is your multiplcation.\n");
			num3 = num1 * num2;
			printf("%d\n",num3);
		}
		if(symbol == '/') 
		{
			printf("Here is your division.\n");
			num3 = num1 / num2;
			printf("%d\n",num3);
		}
	printf("Would you like to calcuate again. (Y/N)\n");
	scanf(" %c",&choice);
		if(choice !='Y' && choice !='N' && choice !='y'); //gives them a choice to say no and yes
		
	}while(choice == 'Y' || choice =='y'); //if user said yes it would redo the loop
}
