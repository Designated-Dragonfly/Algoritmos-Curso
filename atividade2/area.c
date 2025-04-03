#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - trapezio\n");

    char opcao;
    scanf("%c", &opcao);

    float area, l, h, B, b, D, d, r;

    switch (opcao)
    {
    case 'c':
        printf("Digite o raio do circulo: ");
        scanf("%f", &r);
        area = (r * r)*3.14;
        break;

    case 'l':
        printf("Digite o tamanho da diagonal maior: ");
        scanf("%f", &D);

        printf("Digite o tamanho da diagonal menor: ");
        scanf("%f", &d);

        area = (D * d) /2;
        break;
    
    case 'q':
        printf("Digite o tamanho do lado do quadrado: ");
        scanf("%f", &l);

        area = l * l;
        break;
    
    case 'r':
        printf("Digite a largura do retangulo: ");
        scanf("%f", &l);

        printf("Digite a altura do retangulo: ");
        scanf("%2f", &h);

        area = l * h;
        break;
    
    case 't':
        printf("Digite a altura: ");
        scanf("%f", &h);

        printf("Digite o tamanho da base");
        scanf("%f", &b);

        area = (h * b) / 2;
        break;
    
    case 'z':
        printf("Digite o tamanho da base maior: ");
        scanf("%f", &B);

        printf("Digite o tamanho da base menor: ");
        scanf("%f", &b);

        printf("Digite a altura: ");
        scanf("%f", &h);

        area = ((B + b) * h) /2;
        break;

    default:
        printf("Opção invalida\n");
        break;
    }



    printf("A area eh %.2f", area);

    return 0;
}
