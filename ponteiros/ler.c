#include <stdio.h>

#define MAX_TXT 256

int main(int argc, char const *argv[]) {

    FILE *sexta = fopen("sexta.txt", "r");

    if (sexta == NULL) {
        printf("Erro ao abrir arquivo");
        return 1;
    }
    
    char texto[MAX_TXT];
    
    while(fgets(texto, MAX_TXT, sexta)) {
        fprintf(stdout, texto);
    }

    fprintf(stdout, texto);

    fclose(sexta);

    return 0;
}
