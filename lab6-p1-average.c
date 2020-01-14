#include <stdio.h>

double average(double a, double b)
{	
	double avg;
	avg = (a+b)/2;
	return avg;
	
}	
int main(int argc, char *argv[])
{
	double x, y, avg;
	printf("Please enter two numbers and I will calculate their average: ");
	scanf("%lf %lf",&x, &y);
	
	avg = average(x,y); //relates to the double average above the int main
	printf("The Average is %.2lf\n",avg);
	
}
