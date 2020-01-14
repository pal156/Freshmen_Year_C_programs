#include <stdio.h> 

int main(int argc, char *argv[]) 

{
	int length, width; //box dimesion 
	int num1, num2; //user number input
	char character, choice; //to take in a character

	do
	{
	printf("Hello, welcome to box maker!\n");
	
	printf("Please input a number for length and width of the box. (Put spaces to have different numbers.)\n");
	scanf("%d %d", &num1, &num2);
	
	printf("What kind of character do you want to use for this box?\n");
	scanf(" %c",&character);
	
	length = 0;
	
	do 

	{ 

		width=num1-1; 

		do 

		{ 

			if ( length==0 || length==num1-1 || width==0 || width==num2-1 ) 

			{ 

				printf("%c",character); 

			} //Kayden Paplow helped on the else if part
			else if (width == num1/2 || length == num2/2) //allows to put spaces between the dollar signs to make a box
            {
            	printf("%c", character);
            	
            }
            else
			{
			printf(" ");
			}  

			if (width <= 0) 

			{ 

				printf("\n"); 

			} 

			width--;

		} while (width >= 0); 

		length++; // means the same as length = length + 1; 

    } while (length<num2); 
	printf("Would you like to do it again. (Y/N)\n");
	scanf(" %c",&choice);
		if(choice !='Y' && choice !='N' && choice !='y'); //gives them a choice to say no and yes
		
	}while(choice == 'Y' || choice =='y');
}
