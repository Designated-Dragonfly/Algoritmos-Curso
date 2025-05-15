#include <stdio.h>

void verifica_se_primo(int numero) {
    for (int divisor = 2; divisor < numero; divisor++) {
        if((numero % divisor) == 0) {
            printf("O numero nao eh primo, ele eh divisivel por %d", divisor);
            return;
        }
    }

    printf("O numero eh primo");
    return;
    
}

int main(int argc, char* argv[]) {
    int numero_para_testar;

    printf("Digite um numero: ");
    scanf("%d", &numero_para_testar);

    verifica_se_primo(numero_para_testar);
}

