#include <stdio.h> 
#include <string>

/* Command line arguments in see
 * are received by the program via "argc" and "argv" that are listed there in the parens
 * after "main"
 
 *argc -- tells us how many command line args there are
 *argv -- is a list of the the strings, each being one of the args
 *so you you type the command...
 * ./sayHellto this that theOther
 *then argc will 4
 *	say what????? --the command itself is considered an argument
 
 *argv would contain: { "./sayHelloTo", "this", "that", "theOther" }
 
 *if you want to talk about a specific item in the list.. that put its index in []
 *after "argv" 
 */

int main(int argc, char *argv[])
{
	int i;
	for(i=1; i<argc; i++)   
	{
	//we want the computer say "Hello whatverNameIsFirst"
	if ( strcmp(argv[i], "World") != 0 ) 
		{
		printf("Hello %s \n", argv[i]); //<-------- Almost right
	//the double quoes above are really a "forat" for the printf to use.....
	// we gotta learn them format codes....
	//first format code : %s -- means substitutes the test of a strings here
		}
		
	}

}
