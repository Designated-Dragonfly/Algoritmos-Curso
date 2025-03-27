#include <stdio.h>

int main(int argc,char* argv[]) {
    int idade = 30;
    float altura = 1.72;
    double peso = 79.85;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%lf", &peso);

    printf("\nA idade eh %d\n", idade);
    printf("altura eh %.2f\npeso eh %.2lf", altura, peso);

    double dobro_peso = peso *2;
    printf("\n\n%lf", dobro_peso);

    return 0;

}