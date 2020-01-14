#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2, num3;
	num3 = 0; //so the value doesn't get messed up
	
	printf("Dear user, please input a starting number.\n"); 
	scanf("%d",&num1);
	
	printf("Input the changing number.\n");
	scanf("%d",&num2);
	
	printf("Here is your sum.\n");
	num3 = num1 +num2;
	printf("%d\n",num3);
	
	printf("Here is your difference.\n");
	num3 = num1 - num2;
	printf("%d\n",num3);
	
	printf("Here is your product.\n");
	num3 = num1 * num2;
	printf("%d\n",num3);
	
	printf("Here is your quotient.\n");
	num3 = num1 / num2;
	printf("%d\n",num3);
}
