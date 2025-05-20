#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    int x, y, z;

    if (argc == 3) {
        x = atoi(argv[1]);
        y = atoi(argv[2]);

        printf("maior (%d, %d): %d\n", x, y, maior_2n(x,y));
    } else if (argc == 4) {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        z = atoi(argv[3]);

        printf("maior (%d, %d, %d): %d\n", x, y, z, maior_3n(x,y, z));
    } else {
        printf("Quantia de numeros invalida\n");
    }

    return 0;
}