// part1_variables
//
// This program was written by Conrad Vernon (z5478184),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14 

int main(void) {
	// 1. Declare the variables
	double radius;
	
    // 2. Initalise the variables
	scanf("%lf", &radius);

    // 3. Calculate the area of the circle
	double area = (radius * radius) * PI;
    
	// 4. Print the result
	printf("the area of the circle wioth radius %lf is %lf\n", radius, area);

	return 0;
}
