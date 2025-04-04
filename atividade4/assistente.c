#include <stdio.h>

int main(int argc, char const *argv[])
{
    char resposta;
    char genero_do_filme, tipo_de_filme;

    printf("Escolha o tipo de filme\nl- Leve\ni - Intenso\n");
    scanf("%c", &resposta);

    if (resposta == 'l') {
        printf("Escolha o genero do filme:\nc - Comedia\na - Animacao\n");
        getchar();
        scanf("%c", &genero_do_filme);

        if (genero_do_filme == 'c') {
            printf("Assista \"As branquelas\"");
        } else if (genero_do_filme == 'a') {
            printf("Assista \"Toy Story\"");
        }  else {
            printf("Resposta invalida");
        } 

    } else if (resposta == 'i') {
        printf("Escolha o genero do filme:\nt - Terror\na - Acao\n");
        getchar();
        scanf("%c", &genero_do_filme);

        if (genero_do_filme == 't') {
            printf("Escolha o tipo:\np - Psicologico\ns - Sobrenatural\n");
            getchar();
            scanf("%c", &tipo_de_filme);

            if (tipo_de_filme == 'p') {
                printf("Assista \"Corra\"");
            } else if (tipo_de_filme == 's') {
                printf("Assista \"Invocacao do Mal\"");
            } else {
                printf("Resposta invalida");
            }
            
        } else if (genero_do_filme == 'a') {
            printf("Escolha o tipo:\ns - Super-Herois\nr - Aventura Realista\n");
            getchar();
            scanf("%c", &tipo_de_filme);

            if (tipo_de_filme == 's') {
                printf("Assista \"Vingadores: Ultimato\"");
            } else if (tipo_de_filme == 'r') {
                printf("Assista\"Mad Max: Estrada da Furia\"");
            } else {
                printf("Resposta invalida");
            }
        }
        
    } else {
        printf("Resposta invalida");
    }


    return 0;

}
