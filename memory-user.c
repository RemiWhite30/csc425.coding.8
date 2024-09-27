#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <bytes>\n", argv[0]);
        return 1;
    }

    int bytes = atoi(argv[1]);
    int *pointer = (int *)malloc(bytes);
    if (pointer == NULL) {
        return 1;
    }

    int arraySize = (bytes) / sizeof(int); 
    int *beginning = pointer;

    while (1) {
        pointer++; 

        if (pointer == beginning + arraySize) {
            pointer = beginning;
        }
    }

    free(beginning);
    return 0;
}
