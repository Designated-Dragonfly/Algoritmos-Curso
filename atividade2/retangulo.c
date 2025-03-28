#include <stdio.h>

int main(int argc, char* argv[]) {
  
    float altura, largura;

    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);

    printf("Digite a altura do retangulo: ");
    scanf("%2f", &altura);

    float area = largura * altura;
    printf("A area do retangulo eh de %.2f\n", area);
    
  return 0;
}
