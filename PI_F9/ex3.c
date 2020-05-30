#include <stdlib.h>

typedef struct dlista {
    int valor;
    struct dlista *prox, *ant;
} *DLInt;

typedef struct abin {
    int valor;
    struct abin *esq, *dir;
} *ABin;

ABin criaABIN() {
    ABin a11 = malloc(sizeof(struct abin));
    a11->valor = 11;
    ABin a12 = malloc(sizeof(struct abin));
    a12->valor = 12;
    a11->dir = a12;
    a12->esq = NULL;
    a12->dir = NULL;
    ABin a9 = malloc(sizeof(struct abin));
    a11->esq = a9;
    a9->valor = 9;
    ABin a10 = malloc(sizeof(struct abin));
    a10->valor = 10;
    a10->esq = NULL;
    a10->dir = NULL;
    a9->dir = a10;
    ABin a4 = malloc(sizeof(struct abin));
    a4->valor = 4;
    a4->esq = NULL;
    a9->esq = a4;
    ABin a7 = malloc(sizeof(struct abin));
    a7->valor = 7;
    a7->esq = NULL;
    a7->dir = NULL;
    a4->dir = a7;
    return a11;
}

DLInt inorderL(ABin a) {
    DLInt esq, dir, l, inicio = NULL;
    if (a != NULL) {
        esq = inorderL(a->esq);
        dir = inorderL(a->dir);
        l = malloc(sizeof(struct dlista));
        l->valor = a->valor;
        if (esq == NULL) {
            inicio = l;
            l->ant = NULL;
        } else {
            inicio = esq;
            while (esq->prox != NULL) {
                esq = esq->prox;
            }
            l->ant = esq;
            esq->prox = l;
        }
        if (dir == NULL) l->prox = NULL;
        else {
            l->prox = dir;
            dir->ant = l;
        }
    }
    return inicio;

}

int main() {
    ABin a = criaABIN();
    DLInt l = inorderL(a);
    return 0;
}