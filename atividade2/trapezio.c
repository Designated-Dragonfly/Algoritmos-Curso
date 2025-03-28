#include <stdio.h>

int main(int argc, char* argv[]) {
  
    float base_maior, base_menor, altura;

    printf("Digite o tamanho da base maior: ");
    scanf("%f", &base_maior);

    printf("Digite o tamanho da base menor: ");
    scanf("%f", &base_menor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    float area = ((base_maior + base_menor) * altura) /2;
    printf("A area do trapezio eh de %.2f\n", area);

  return 0;
}
