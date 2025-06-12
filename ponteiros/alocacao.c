#include <stdio.h>

typedef struct Ponto {
    int x;
    float y;
} Ponto;

#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    int qtd_linhas = 0;
    int x, soma_x;
    float y, media_x, media_y, soma_y;
    Ponto *numeros;

    FILE *arq = fopen("dados_regressao.csv", "r");

    if (arq == NULL) {
        printf("erro ao abrir o arquivo");
        return 1;
    }
    
    while (fscanf(arq, "%d, %f", &x, &y) != EOF) {
        qtd_linhas++;
    }

    printf("%d\n", qtd_linhas);    

    numeros = malloc(sizeof(Ponto) * qtd_linhas);

    if (numeros != NULL) {
        int i = 0;
        fseek(arq, 0, SEEK_SET);
        soma_x =0;
        soma_y = 0;
        while (fscanf(arq, "%d,%f", &x, &y) != EOF) {
            numeros[i].x = x;
            numeros[i].y = y;
            soma_x += x;
            soma_y += y;

            i++;
        }
    }

    media_x = soma_x / qtd_linhas;
    media_y = soma_y / qtd_linhas;

    float inclinacao_dividento = 0;
    float inclinacao_divisor = 0;
    for (int i = 0; i < qtd_linhas; i++) {
        inclinacao_dividento += (numeros[i].x - media_x) * (numeros[i].y - media_y);
        inclinacao_divisor += (numeros[i].x - media_x) * (numeros[i].x - media_x);
    }
    
    float a = inclinacao_dividento / inclinacao_divisor;
    float b = media_y - (a * media_x);

    printf("%.2fx + %.2f", a, b);
    
    free(numeros);
    fclose(arq);

    return 0;
}
