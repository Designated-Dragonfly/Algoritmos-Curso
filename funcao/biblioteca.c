/*
    Retorna o maior entre 2 numeros inteiros
*/
int maior_2n(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int maior_3n(int a, int b, int c) {
    int maior = maior_2n(a, b);
    return maior_2n(maior, c);
}
