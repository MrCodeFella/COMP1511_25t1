// functions.c
//
// Written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple demonstration of functions
int sum(int first_num, int second_num);

#include <stdio.h>

// TODO: Function prototype
int main(void) {
    int result = 0;
    int num1 = 5;
    int num2 = 3;

    // TODO: Function call 
    result = sum(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

// TODO: Function definition
int sum(int first_num, int second_num) {
    int total = first_num + second_num;
    return total;
}

