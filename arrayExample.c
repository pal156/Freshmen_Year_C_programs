#include <stdio.h>


int main(int argc, char *argv[])
{
	double userList[100]; // declaring an array of 100 integers
	double userNumber, listSum, listAvg;
	int index, listLength;
	
	// read list of numbers form the user an store in an array
	// ask user to enter >=0 numbers, and end list with a negative
	printf("Please enter integrs >=0, end with a negative...\n");
	
	userNumber = 0;
	
	for ( index=0; index <= 99 && userNumber>=0; index++) {
		scanf("%lf", &userNumber);
		userList[index] = userNumber;
	}
	
	listLength = index -1;
	
	printf("-------------------------------\n");
	printf("Index   Value\n");
	for ( index = 0; index < listLength; index++) {
		printf("%6d: %10.2lf\n", index, userList[index]);
	}
	
	listSum=0;
	
	for (index=0; index <= listLength-1; index++) {
		listSum = listSum + userList[index];
	}
	
	listAvg = listSum / listLength;
	
	printf("Total: %10.2lf\n", listSum);
	
	printf("Average: %10.2lf\n", listAvg);
	
	
}
