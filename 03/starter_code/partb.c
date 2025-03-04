#include <stdio.h>

int main(void) {

    char letter;
    scanf(" %c", &letter);
    int count = 0;

    while (letter != 'q') {
        scanf(" %c", &letter);
        count++;
    }

    printf("count is %d\n", count);

    return 0;
}