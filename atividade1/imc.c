#include <stdio.h>

int main(int argc, char* argv[]) {
    float peso;
    float altura;
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("Seu IMC eh: %.2f\n", imc);

    if (imc <= 18.5)
    {
        printf("Peso baixo\n");

    } else if (imc <= 24.9)
    {
        printf("Peso normal\n");

    } else if (imc <= 29.9)
    {
        printf("Sobrepeso\n");
    
    } else if (imc <= 34.9) {
        printf("Obesidade I\n");

    } else if (imc <= 39.9)
    {
        printf("Obesidade II\n");

    } else 
    {
        printf("Obesidade III\n");
    }

    return 0;
}
