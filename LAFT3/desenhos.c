#include <stdio.h>
#include "desenhos.h"

void imprime_triangulo(int num_linhas) {
    int linha = 1;

    for (int i = 0; i < num_linhas; i++) {
        putchar(' ');
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
    int ca = 65;
    for (int i = 0; i < 2 * (nl - linha); i++)
        putchar(' ');

    for (int i = 0; i < linha; i++)
        printf("%c ", ca++);
    ca--;
    for (int i = 0; i < linha - 1; i++)
        printf("%c ", --ca);
}

void imprime_hexagono(int num) {
    prim_ult(num);

    for (int l = 1; l <= num; l++) {
        for (int i = 0; i < num - l; i++)
            putchar(' ');

        putchar('#');

        for (int i = 0; i < num + (2 * (l - 1));i++)
            putchar(' ');

        putchar('#');
        putchar('\n');
    }

    for (int l = num - 1; l >= 1; l--) {
        for (int i = 0; i < num - l; i++)
            putchar(' ');

        putchar('#');

        for (int i = 0; i < num + (2 * (l - 1));i++)
            putchar(' ');

        putchar('#');
        putchar('\n');
    }

    prim_ult(num);
}

void prim_ult(int n) {
    for (int i = 0; i < n; i++)
        putchar(' ');

    for (int i = 0; i < n; i++)
        putchar('#');

    putchar('\n');
}