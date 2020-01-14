#include <stdio.h>



void skipToEndOfLine()
{	
	char c;
	do
	{
		scanf("%c",&c);
	} while (c != '\n'); //repat as long as we have not read new line
}

char getPlayerChoice(char *question)
{	
	char choice;
	//user input
	do
	{	
		printf("%s", question);
		scanf(" %c", &choice);
		if (choice != 'a' && choice != 'b')
		{
			printf("I do not understand.\n");
			skipToEndOfLine();
		}
	} while (choice != 'a' && choice != 'b');
	
	return choice;
	
}

int main(int argc, char *argv[])
{
	char choice;
	int room, hasHat;
	room = 0;
	hasHat = 0;
	
	printf("Welcome to Rooms!\n");
	//game situation
	
	do
		{
			if (room==0) {	
			printf("You're in a room. All you see is two doors. One on the right and one on the left\n");
			}
			if (room==1) {
				printf("You opened the door on the left and found another room\n");
			}
			if (room==2) {
				printf("You opened the door on the right and it is cemmented off.\n");
			}
			if (room==3) {
				printf("The door opened by itself and there are nothing but cobwebs here.\n");
			}
			if (room==4) {
				printf("Donald duck hat is found on the ground. There's a door with feathers on the ground. \n");
			}	
			if (room==4.5) {
				printf("The Hat is kinda dirty and old. There still the door with feathers. \n");
			}
			if (room==5) {	
				printf("There are spiders and you died\n");
				break;
			}
			if (room==6) {
				printf("Work in process and thank you for playing.\n");
				break;
			}
				
				
			//player choice below
			if (room==0) {
				choice = getPlayerChoice("What would you like to do? (a) Door on the left (b) Door on the right\n");
				if (choice =='a') {
					room = 1;
				} if ( choice == 'b') {
					room = 2;
				} 
			} if (room==1) {
				printf("You see a paper that said Mickey mouse is dead. There are two more doors.\n");
				choice = getPlayerChoice("Door on the left? (a) Door on the right? (b)\n");
				if (choice =='a') {
					room = 3;
				} if ( choice == 'b') {
					room = 4;
				} 
			} if (room==2) {
				printf("Since it's cemented off were still in the begining room\n");
				room = 0;
			} if (room==3) {
				choice = getPlayerChoice("Contiue forward with bravery (a) Just don't go near it at all (b)\n");
				if (choice =='a') {
					room = 5;
				} if ( choice == 'b') {
					room = 3;
				} 
			} if (room==4) {
				choice = getPlayerChoice("Go through the door (a) Pick up the Donald Duck hat (b)\n");
				if (choice =='a') {
					room = 6;
				} if ( choice == 'b') {
					room = 4.5;
					hasHat = 1;
				} 
			}
			
			
		} while (1==1);
	
}
