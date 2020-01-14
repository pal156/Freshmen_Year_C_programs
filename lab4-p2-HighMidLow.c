#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2, num3, high, low, mid;
	char name[20]; 
	char choice;
	high = 0; //declaring it zero so the computer knows it zero
	mid = 0;
	low = 0;
	printf("Welcome User! What is your name?\n");
	scanf("%s",name);
	
	do
	{
		printf("Dear %s can you input 3 different number? (make sure you add a space to specify different numbers.)\n",name);
		scanf("%d %d %d",&num1,&num2,&num3);
		//printf("%d %d %d\n",num1,num2,num3);
		
		if (num3 >= num2 && num2 >= num1)
		{
			printf("hello\n");
			high = num3+0;
			mid = num2+0;
			low = num1+0;
			printf("High = %d \nMid = %d \nLow = %d \n",high,mid,low);
		}
		
		if (num2 >= num1 && num1 >= num3)
		{
			high = num2+0;
			mid = num1+0;
			
			low = num3+0;
			printf("High = %d \nMid = %d \nLow = %d \n",high,mid,low);
		}
		
		if (num3 >= num1 && num1 >= num2)
		{
			high = num3+0;
			mid = num1+0;
			low = num2+0;
			printf("High = %d \nMid = %d \nLow = %d \n",high,mid,low);
		}
		
		if (num1 >= num3 && num3 >= num2)
		{
			high =num1+0;
			mid = num3+0;
			low = num2+0;
			printf("High = %d \nMid = %d \nLow = %d \n",high,mid,low);
		}
		
		if (num1 >= num2 && num2 >= num3)
		{
			high =num1+0;
			mid = num2+0;
			low = num3+0;
			printf("High = %d \nMid = %d \nLow = %d \n",high,mid,low);
		}
		
		if (num2 >= num3 && num3 >= num1)
		{
			high =num2+0;
			mid = num3+0;
			low = num1+0;
			printf("High = %d \nMid = %d \nLow = %d \n",high,mid,low);
		}printf("Would you like to do that again %s? (y/n)\n",name);
		scanf(" %c",&choice);
		if(choice !='y' && choice !='n'); //gives them a choice to say no and yes
		
	}while(choice == 'y');
	
	printf("Thank you for using me.\n");
}
