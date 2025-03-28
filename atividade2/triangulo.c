#include <stdio.h>

int main(int argc, char* argv[]) {
  
    float base, altura;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o tamanho da base");
    scanf("%f", &base);

    float area = (base * altura) / 2;
    printf("A area do triangulo eh de %.2f\n", area);
  return 0;
}
