#include <stdio.h>
#include "desenhos.h"

void imprime_triangulo(int num_linhas) {
    int linha = 1;

    for (int i = 0; i < num_linhas; i++) {
        imprimeLinha(linha++, num_linhas);
        putchar('\n');
    }
}

void imprime_losango(int num_linhas) {
    int linha = 1, i;

    for (i = 0; i < num_linhas; i++) {
        imprimeLinha(linha++, num_linhas);
        putchar('\n');
    }
    linha--;
    for (; i > 0; i--) {
        imprimeLinha(--linha, num_linhas);
        putchar('\n');
    }
}

void imprimeLinha(int linha, int nl) {
    char ar[nl];
    int x = nl - linha, ca = 65, i;

    //Guarda as letras ou espaçoes nos arrays
    for (i = 1; i <= x; i++)
        ar[i] = ' ';

    for (;i <= nl; i++)
        ar[i] = ca++;

    //Prints
    for (i = 1; i <= nl; i++) {
        printf("%c", ar[i]);
        putchar(' ');
    }

    for (i = nl - 1; i >= 0; i--) {
        printf("%c", ar[i]);
        putchar(' ');
    }
}