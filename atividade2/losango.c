#include <stdio.h>

int main(int argc, char* argv[]) {
  
    float diagonal_maior, diagonal_menor;

    printf("Digite o tamanho da diagonal maior: ");
    scanf("%f", &diagonal_maior);

    printf("Digite o tamanho da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    float area = (diagonal_maior * diagonal_menor) /2;
    printf("A area do losango eh de %.2f\n", area);

  return 0;
}
