#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

int main(int argc, char* argv[]) {
    int x_a, y_a, x_b, y_b;

    if (argc != 5) {
        printf("numero de inputs invalido tente novamente");
        return 1;
    }

    x_a = atoi(argv[1]);
    y_a = atoi(argv[2]);

    x_b = atoi(argv[3]);
    y_b = atoi(argv[4]);

    struct Ponto A = {x_a, y_a};
    struct Ponto B = {x_b, y_b};

    double distancia = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));

    printf("A distancia entre os pontos eh de %.2f\n", distancia);
    
    return 0;
}