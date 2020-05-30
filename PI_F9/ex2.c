#include <stdlib.h>

typedef struct abin {
    int valor;
    struct abin *esq, *dir;
} *ABin;

typedef struct lista {
    int valor;
    struct lista *prox;
} *LInt;

LInt criaLista() {
    LInt l = malloc(sizeof(struct lista));
    l->valor= 11;
    LInt l1 = malloc(sizeof(struct lista));
    l1->valor= 12;
    LInt l2 = malloc(sizeof(struct lista));
    l2->valor= 9;
    LInt l3 = malloc(sizeof(struct lista));
    l3->valor= 4;
    LInt l4 = malloc(sizeof(struct lista));
    l4->valor= 7;
    LInt l5 = malloc(sizeof(struct lista));
    l5->valor = 10;
    l->prox = l1;
    l1->prox = l2;
    l2->prox = l3;
    l3->prox = l4;
    l4->prox = l5;
    l5->prox = NULL;
    return l;
}

ABin fromList(LInt l) {
    if (l != NULL) {
        ABin a = malloc(sizeof(struct abin));
        a->valor = l->valor;
        a->esq = NULL;
        a->dir = NULL;
        l = l->prox;
        ABin inicio = a;
        while (l != NULL) {
            ABin ant = NULL;

            while(a != NULL) {
                ant = a;
                if (l->valor <= a->valor)
                    a = a->esq;
                else a = a->dir;
            }
            ABin b = malloc(sizeof(struct abin));
            b->valor = l->valor;
            b->esq = NULL;
            b->dir = NULL;
            if (b->valor <= ant->valor) ant->esq = b;
            else ant->dir = b;
            l = l->prox;
            a = inicio;
        }
    }
}

LInt inorderL(ABin a) {
    LInt inicio = NULL;
    if (a != NULL) {
        LInt b = malloc(sizeof(struct lista));
        b->valor = a->valor;
        inicio = inorderL(a->esq);
        LInt l = inicio;
        while (l != NULL && l->prox != NULL)
            l = l->prox;
        if (l != NULL)
            l->prox = b;
        else inicio = b;
        b->prox = inorderL(a->dir);
    }
    return inicio;
}

int main() {
    LInt l = criaLista();
    ABin a = fromList(l);
    free(l);
    l = inorderL(a);
    return 0;
}