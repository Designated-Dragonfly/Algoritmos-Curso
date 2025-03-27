#include <stdio.h>

int main(void) {
    float peso;
    float altura;
    
    printf("Digite seu peso\n");
    scanf("%f", &peso);

    printf("Digite sua altura\n");
    scanf("%f", &altura);

    float IMC = peso / (altura * altura);

    printf("Seu IMC é: %f\n", IMC);

    return 0;
}
