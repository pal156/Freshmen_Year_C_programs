#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a;
	char str[20];
	char respone;
	
	do
	{
	printf("Just type random letters at random caps.\n");
	
	scanf("%s",str);
		
	for(a=0;a<=strlen(str);a++)
	{
		if(str[a]>=65 && str[a]<=90)
		{
			str[a]=str[a]+32;
		}
		else if(str[a]>=97 && str[a]<=122)
		{
			str[a]=str[a]-32;
		}
	}
	printf("%s\n",str);
	
	printf("Do you want to do it again\n");
	scanf("%c ", &respone);
	printf("Respone is: %c", respone);
	if (respone != 'n') { exit(0); }
	}while (respone = 'y');

	return 0;
}
