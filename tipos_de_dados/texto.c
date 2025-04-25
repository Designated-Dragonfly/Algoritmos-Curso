#include <stdio.h>
#include <string.h>

#define TAM 255

int main(int argc, char* argv[]) {

    // Declaração de strings
    char palavra1[] = "Conhecimento";
    char palavra2[] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'};
    char palavra3[TAM];
    char palavra4[TAM];
    char frase1[TAM];

    printf("%s", palavra1);
    printf("%s", palavra2);

    printf("palavra2[4] = %c\n", palavra2[4]);

    // Leitura SEGURA de strings
    printf("Digite uma frase: ");
    fgets(frase1, TAM, stdin);

    printf("%s", frase1);

    printf("Digite uma palavra: ");
    fflush(stdin);
    fgets(palavra3, TAM, stdin);

    printf("Digite outra palavra: ");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);

    if (strcmp(palavra3, palavra4) == 0) {
        printf("AS palavras sao iguais\n");
    } else {
        printf("As palavras nao soa iguais\n");
    }
    
    printf("tamanho da palavra 3 eh: %d", strlen(palavra3));

    for(int i = strlen(palavra3) -1; i >= 0; i--) {
        printf("%c", palavra3[i]);
    }
    printf("\n");

    strcat(palavra3, palavra4);
    printf("Palavra 3 concatenada = %s", palavra3);

    return 0;
}