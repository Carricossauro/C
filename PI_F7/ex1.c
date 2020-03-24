#include "ex1.h"
#include <stdio.h>
#include <stdlib.h>

LInt snoc(LInt a, int n) {
    LInt x = malloc(sizeof(Nodo));
    if (a == NULL)
        a = x;
    else {
        while (a->prox != NULL)
            a = a->prox;
        a->prox = x;
    }

    x->valor = n;
    x->prox = NULL;
    return a;
}

LInt cons(LInt a, int n) {
    LInt x = malloc(sizeof(struct slist));
    x->prox = a;
    x->valor = n;
    return x;
}

LInt tail(LInt a) {
    a = a->prox;
    return a;
}

void init(LInt a) {
    while (a->prox->prox != NULL)
        a = a->prox;
    a->prox = NULL;
}

LInt concat(LInt a, LInt b) {
    LInt x = a;
    while (x->prox != NULL)
        x = x->prox;

    x->prox = b;
    return a;
}

int ex1() {
    LInt a = NULL, b = NULL;
    a = cons(a, 1);
    snoc(a, 2);
    snoc(a, 3);
    a = cons(a, 0);
    init(a);
    a = tail(a);

    b = cons(b, 3);
    snoc(b, 4);
    a = concat(a,b);
    b = NULL;
    return 0;
}
