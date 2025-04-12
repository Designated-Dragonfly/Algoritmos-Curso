#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int qtd_alunos;
    printf("Digite o numero de alunos da turma: ");
    scanf("%d", &qtd_alunos);

    float alunos[--qtd_alunos];

    for (int contagem = 0; contagem <= qtd_alunos; contagem++) {
        printf("Digite a nota do aluno %d: ", contagem + 1);
        float nota;
        scanf("%f", &nota);

        while (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida, digite novamente: ");
            scanf("%f", &nota);
        }

        alunos[contagem] = nota;
        
    }
    
    int aprovados_qtd = 0;
    float media = 0.0;
    float menor_nota = 100.0;
    float maior_nota = -1;

    int maior_nota_posi;

    for (int i = 0; i <= qtd_alunos; i++) {
        media += alunos[i];
        if (alunos[i] >= 6.0) {
            aprovados_qtd++;
        }
        if (maior_nota < alunos[i]) {
            maior_nota = alunos[i];
        }
        if (menor_nota > alunos[i]) {
            menor_nota = alunos[i];
        }
    }

    media = media / (float) (qtd_alunos + 1);

    printf("A quantia de alunos aprovados e: %d\n", aprovados_qtd);
    printf("A menor nota e: %.2f\n", menor_nota);
    printf("A maior nota e: %.2f\n", maior_nota);
    printf("A media da turma e: %.2f\n", media);
    
    printf("Escolha um aluno para ver a nota: ");
    int aluno_escolhido;
    scanf("%d", &aluno_escolhido);
    while (aluno_escolhido > qtd_alunos + 1 || aluno_escolhido <= 0) {
        printf("Aluno nao existe escolha outro: ");
        scanf("%d", &aluno_escolhido);
    } 
    printf("A nota do aluno %d e %.2f", aluno_escolhido, alunos[--aluno_escolhido]);
    
    return 0;
}
