include <stdio.h>
include <math.h>
/*
	special include file for math functions
	they work real numbers
	such as 345.678
	two new data types: float, double
	Double means a float can has twice as many digits
*/
int main(int argc, char *argv[])
{
	double x, y, z;
	printf("Please enter three real numbers...\n");
	scanf("%lf %lf %lf", &x, &y, &z); //%lf is fo double data type %f is for plain
	
	printf("Here is the square roots of your numbers: %lf %lf %lf\n",x , y, z);
	
	
}
