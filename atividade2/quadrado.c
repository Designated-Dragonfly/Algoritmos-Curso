#include <stdio.h>

int main(int argc, char* argv[]) {
  
    float lado;
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f", &lado);

    float area = lado * lado;

    printf("A area do quadrado eh de %.2f\n", area);
    
  return 0;
}
