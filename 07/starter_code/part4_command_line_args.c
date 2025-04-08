#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("arg count %d\n", argc);
    // printf("program name %s\n", argv[0]);
    for (int i = 0; i < argc; i++) {
        printf("arg index %d arg name %s\n", i, argv[i]);
    }

    return 0;
}
