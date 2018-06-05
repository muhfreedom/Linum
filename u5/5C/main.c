#include <stdio.h>
#include <stdlib.h>
#include "my_add.h"

/*
int plus_2(int x, int y) {
    int sum = x + y;
    printf("%d\n", sum);
    return 0;
}
*/

int main(int argc, const char *argv[]) {
    int sum = 0;

    if(argc != 3) {
        printf("Mata in 2 siffror...\n");
        exit(1);
    }
    sum = add(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", sum);
    return sum;
}
