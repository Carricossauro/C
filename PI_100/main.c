#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

int main() {
    printf("Hello, World!\n");
    return 0;
}

int ex1(LInt lista) {
    int r = 0;
    while (lista != NULL) {
        r++;
        lista = lista->prox;
    }
    return r;
}

void ex2(LInt lista) {
    LInt l;
    while (lista != NULL) {
        l = lista->prox;
        free(lista);
        lista = l;
    }
}

void ex3(LInt lista) {
    while (lista != NULL) {
        printf("%d", lista->valor);
        lista = lista->prox;
    }
}