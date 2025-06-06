#include <stdio.h>

int main(int argc, char const *argv[]) {

    FILE *sexta = fopen("sexta.txt", "w");

    if (sexta == NULL) {
        printf("Erro ao abrir arquivo");
        return 1;
    }
    

    fprintf(sexta, "Hello, world!");

    fclose(sexta);

    return 0;
}
