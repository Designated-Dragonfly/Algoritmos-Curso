#include <stdio.h>

int main(int argc, char* argv[]) {
  
    float raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float area = (raio * raio)*3.14;

    printf("A area do raio é de %.2f\n", area);
  return 0;
}
