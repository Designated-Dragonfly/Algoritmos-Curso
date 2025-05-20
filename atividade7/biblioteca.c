/*
    Retorna o maior e menor entre 2 ou 3 numeros inteiros
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

int menor_2n(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int menor_3n(int a, int b, int c) {
    int menor = menor_2n(a, b);
    return menor_2n(menor, c);
}
