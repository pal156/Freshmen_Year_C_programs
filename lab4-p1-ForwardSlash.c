#include <stdio.h>

int main(int argc, char *argv[])
{
	int tic, toc;
	toc=0;
	int tac;
	
	printf("something something...\n");
	scanf("%d",&tac);
	do
	{
		if (toc >= 0)
		{
			tic = tac;
			do
			{
				printf(" ");
				tic = tic - 1;
			}while (tic>=toc);
		}
		printf("#\n");
		toc = toc + 1;
	}while (toc < tac);

}
