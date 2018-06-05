#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int sum = 0;

    if(argc != 3) {
        printf("Mata in 2 siffror...\n");
        exit(1);
    }

    sum = atoi(argv[1]) + atoi(argv[2]);
    printf("%d\n", sum);

    return sum;
}
