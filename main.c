#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>

int main() {
    struct rlimit limit;

    // Stack
    char c1; // 1 byte
    char c2; // 1 byte
    char c3; // 1 byte
    char *pointer; // 8 bytes -> 64 bits

    // Heap
    pointer = (char *) malloc(1024);

    // Uso da memória

    free(pointer);

    printf("Char: %i byte \n", sizeof(char));
    printf("Char*: %i bytes \n", sizeof(char *));

    getrlimit (RLIMIT_STACK, &limit);
    printf ("\nStack Limit = %ld and %ld max\n", limit.rlim_cur, limit.rlim_max);



    return 0;
}
