// part5_roller_coaster
//
// This program was written by Conrad Vernon, z5478148
// on [DATE]
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message

//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not 
//    tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MINIMUM_HEIGHT 100
#define MINIMUM_ALONE_HEIGHT 160

int main(void) {

	int height;
	scanf("%d", &height);

	if (height <= 0) {
		printf("You have provided an invalid height\n");
	} else if (height < MINIMUM_HEIGHT) {
		printf("Sorry you are not tall enough to ride\n");
	} else if (MINIMUM_HEIGHT <= height && height < MINIMUM_ALONE_HEIGHT) { 
		printf("You may ride with an adult\n");
	} else {
		printf("You may ride!\n");
	}
	
	return 0;
}
