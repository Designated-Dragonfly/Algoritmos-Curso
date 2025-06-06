#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    FILE *log = fopen("log.txt", "a");

    if (log == NULL) {
        printf("Erro ao abrir arquivo");
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    if (esperado < min || esperado > max) {
        printf("Valor esperado fora do limite");
        return 1;
    }
    
    int aleatorio = min + (rand() % max);
    

    fprintf(log, "Valor maximo: %d\n", max);
    fprintf(log, "Valor minimo: %d\n", min);
    fprintf(log, "Valor esperado: %d\n", esperado);
    fprintf(log, "Valor aleatorio: %d\n", aleatorio);

    if (esperado == aleatorio) {
        fprintf(log, "Resultado: sorteado");
    } else {
        fprintf(log, "Resultado: não sorteado");
    }
    

    return 0;
}
