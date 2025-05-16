#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    printf("maior (%d, %d): %d", x, y, maior_2n(x,y));

    return 0;
}