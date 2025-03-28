#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {

    float n1, n2;

    printf("Digite o valor de n1: ");
    scanf("%f", &n1);

    printf("Digite o valor de n2: ");
    scanf("%f", &n2);

    // Adição
    float soma = n1 + n2;
    printf("Adicao = %.2f\n", soma);

    // Subtração
    float diferenca = n1 - n2;
    printf("Subtracao = %.2f\n", diferenca);

    // Multiplicação
    float produto = n1 * n2;
    printf("Multiplicacao = %.2f\n", produto);

    // Divisão
    float quociente = n1 / n2;
    printf("Divisao = %.2f\n", quociente);

    // Potenciação
    float potencia = powf(n1, n2);
    printf("Potenciacao = %.2f\n", potencia);

    // Radiciação
    float raiz = sqrtf(n1);
    printf("Raiz de n1 = %.2f\n", raiz);

    // Resto da divisão
    float resto = (int)n1 % (int) n2;
    printf("Resto da divisao = %.2f\n", resto);

    // Incremento
    float incremento = ++n1;
    printf("Incremento de n1 = %.2f", incremento);

    // Decremento
    float decremento = --n1;
    printf("Decremento de n1 = %.2f", decremento);

    return 0;
}