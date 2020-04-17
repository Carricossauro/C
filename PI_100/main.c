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

LInt ex4(LInt l) {
    if (l == NULL)
        return NULL;
    LInt t = l->prox, n;
    while (t != NULL) {
        n = t->prox;

        //Mete o nodo t em primeiro
        LInt lista = l;
        LInt ns = t->prox;
        t->prox = lista;
        while (lista->prox != t) {
            lista = lista->prox;
        }
        lista->prox = ns;
        l = t;

        t = n;
    }
    return l;
}

void ex5(LInt *l, int x) {
    LInt t = *l;
    if (t == NULL) {
        *l = malloc(sizeof(struct lligada));
        (*l)->valor = x;
        (*l)->prox = NULL;
    } else {
        while (t->prox != NULL && x > t->prox->valor) {
            t = t->prox;
        }
        LInt n = malloc(sizeof(struct lligada));
        n->valor = x;
        if (t == *l && x < t->valor) {
            *l = n;
            n->prox = t;
        } else {
            n->prox = t->prox;
            t->prox = n;
        }
    }
}

int ex6(LInt *l, int x) {
    LInt t = *l, n;
    if (t == NULL)
        return 1;

    while (t != NULL && t->valor != x) {
        n = t;
        t = t->prox;
    }

    if (t == NULL)
        return 1;
    else if (*l == t && t->valor == x) {
        *l = t->prox;
        free(t);
    } else if (t->valor == x) {
        n->prox = t->prox;
        free(t);
    } else return 1;
    return 0;
}

void ex7(LInt *r, LInt l1, LInt l2) {
    int ls = (l1 != NULL) ? 1 : 2;
    LInt l = (ls == 1) ? l1 : (ls == 2) ? l2 : NULL;
    for (int i = 0; i < 2; i++) {
        while (l != NULL) {
            int v = l->valor;

            LInt t = *r;
            if (t == NULL) {
                *r = malloc(sizeof(struct lligada));
                (*r)->valor = v;
                (*r)->prox = NULL;
            } else {
                while (t->prox != NULL && v > t->prox->valor) {
                    t = t->prox;
                }
                LInt n = malloc(sizeof(struct lligada));
                n->valor = v;
                if (t == *r && v < t->valor) {
                    *r = n;
                    n->prox = t;
                } else {
                    n->prox = t->prox;
                    t->prox = n;
                }
            }
            l = l->prox;
        }
        l = (ls == 1) ? l2 : NULL;
    }
}

void ex8(LInt l, int x, LInt *mx, LInt *Mx) {
    *mx = NULL;
    *Mx = NULL;
    LInt t = NULL, nx, Nx;

    if (l != NULL) {
        while (l != NULL) {
            t = l->prox;
            if (l->valor < x) {
                if (*mx == NULL) {
                    *mx = l;
                    nx = *mx;
                } else {
                    nx->prox = l;
                    nx = nx->prox;
                }
            } else {
                if (*Mx == NULL) {
                    *Mx = l;
                    Nx = *Mx;
                } else {
                    Nx->prox = l;
                    Nx = Nx->prox;
                }
            }

            l->prox = NULL;
            l = t;
        }
    }
}

LInt ex9(LInt *l) {
    LInt t = *l, n = NULL;
    int x = 0;
    while (t != NULL) {
        x++;
        t = t->prox;
    }
    t = *l;
    x /= 2;
    while (x > 0) {
        x--;
        n = t;
        t = t->prox;
    }
    if (n != NULL) {
        n->prox = NULL;
    }
    return t;
}
















