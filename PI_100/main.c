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
    LInt t = *l, n = *l;
    int x = 0, i;
    while (t != NULL) {
        x++;
        t = t->prox;
    }
    if (x == 1) {
        n = NULL;
    } else {
        x /= 2;
        t = *l;
        for (i = 1; i < x; i++){
            t = t->prox;
        }
        *l = t->prox;
        t->prox = NULL;
    }
    return n;
}

int ex10(LInt *l, int x) {
    int y = 0;
    LInt t, n = *l; //t percorre a lista, n guarda o ponto inicial
    while (n != NULL && n->valor == x) {
        n = n->prox;
        y++;
    }
    t = n;
    while (t != NULL && t->prox != NULL) {
        if (t->prox->valor == x) {
            LInt p = t->prox->prox;
            free(t->prox);
            t->prox = p;
            y++;
        } else {
            t = t->prox;
        }
    }
    *l = n;
    return y;
}

int ex11(LInt *l){
    int y = 0, x;
    LInt t, n;
    t = *l;
    while (t != NULL) {
        x = t->valor;
        n = t;
        while (n != NULL && n->prox != NULL) {
            if (n->prox->valor == x) {
                LInt p = n->prox->prox;
                free(n->prox);
                n->prox = p;
                y++;
            } else
                n = n->prox;
        }
        t = t->prox;
    }
    return y;
}

int ex12(LInt *l){
    int m = (*l)->valor;
    LInt n = *l, t = *l, an = NULL;

    while (t != NULL) {
        if (t -> prox != NULL && t->prox->valor > m) {
            m = t->prox->valor;
            n = t->prox;
            an = t;
        }
        t = t->prox;
    }
    if (an == NULL)
        *l = n->prox;
    else {
        t = n->prox;
        free(n);
        an->prox = t;
    }

    return m;
}

void ex13(LInt *l){
    if ((*l)->prox == NULL) {
        *l = NULL;
    } else {
        LInt n, t = *l;
        while (t->prox != NULL) {
            n = t;
            t = t->prox;
        }
        free(t);
        n->prox = NULL;
    }
}

void ex14(LInt *l, int x) {
    LInt t = *l, ant;
    while (t != NULL) {
        ant = t;
        t = t->prox;
    }
    LInt n = malloc(sizeof(struct lligada));
    n->valor = x;
    n->prox = NULL;
    if (*l == NULL) *l = n;
    else ant->prox = n;
}

void ex15(LInt *a, LInt b) {
    LInt la = *a;
    if (la != NULL) {
        while (la->prox != NULL) la = la->prox;
        la->prox = b;
    } else *a = b;
}

LInt ex16(LInt a) {
    LInt inicio = NULL;
    if (a != NULL) {
        LInt l = malloc(sizeof(struct lligada));
        l->valor = a->valor;
        l->prox = NULL;
        inicio = l;
        a = a->prox;
    }
    while (a != NULL) {
        LInt t = malloc(sizeof(struct lligada));
        t->valor = a->valor;
        t->prox = NULL;
        l->prox = t;
        l = l->prox;
        a = a->prox;
    }
    return inicio;
}

LInt ex17(LInt a){
    LInt l = NULL;
    while (a != NULL) {
        LInt t = malloc(sizeof(struct lligada));
        t->valor = a->valor;
        t->prox = l;
        l = t;
        a = a->prox;
    }
    return l;
}

int ex18(LInt l){
    int x = l->valor;
    l = l->prox;
    while (l != NULL) {
        if (l->valor > x) x = l->valor;
        l = l->prox;
    }
    return x;
}

int ex19(int n, LInt *a){
    LInt l = *a;
    int r = 0;
    while (n != 1 && l != NULL && l->prox != NULL) {
        l = l->prox;
        r++;
        n--;
    }
    if (l != NULL) {
        l->prox = NULL;
        r++;
    }
    return r;
}

int ex20(int n, LInt *l){
    LInt ant;
    int r = 0;
    while (n > 0 && *l != NULL) {
        ant = *l;
        *l = (*l)->prox;
        free(ant);
        r++;
        n--;
    }
    return r;
}

LInt ex21(LInt l, int n) {
    while (n > 0) {
        l = l->prox;
        n--;
    }
    return l;
}

int ex22(LInt l, int v[], int n){
    int i;
    for(i = 0; i < n && l != NULL; i++, l = l->prox) {
        v[i] = l->valor;
    }
    return i;
}

LInt ex23(int v[], int n){
    int i;
    LInt l, ant = NULL, inicio = NULL;
    for (i = 0; i < n; i++) {
        l = malloc(sizeof(struct lligada));
        l->valor = v[i];
        l->prox = NULL;
        if (ant != NULL)
            ant->prox = l;
        ant = l;
        if (inicio == NULL) inicio = l;
    }
    return inicio;
}

LInt ex24(LInt a) {
    LInt l, inicio = NULL;
    int total = 0;
    if (a != NULL) {
        l = malloc(sizeof(struct lligada));
        total += a->valor;
        l->valor = total;
        l->prox = NULL;
        inicio = l;
        a = a->prox;
    }
    while (a != NULL) {
        LInt t = malloc(sizeof(struct lligada));
        total += a->valor;
        t->valor = total;
        t->prox = NULL;
        l->prox = t;
        l = t;
        a = a->prox;
    }
    return inicio;
}

void ex25(LInt l){
    while (l != NULL) {
        LInt ant, a = l->prox;
        ant = l;
        while (a != NULL) {
            if (a->valor == l->valor) {
                ant->prox = a->prox;
                free(a);
                a = ant->prox;
            } else {
                ant = a;
                a = a->prox;
            }
        }
        l = l->prox;
    }
}

LInt ex26(LInt l){
    if (l != NULL && l->prox != NULL) {
        LInt a = l;
        while (a->prox != NULL) {
            a = a->prox;
        }
        a->prox = l;
        l = l->prox;
        a->prox->prox = NULL;
    }
    return l;
}

LInt ex27(LInt l){
    int n = 1;
    LInt ant, i, inicio = NULL;
    if (l != NULL) {
        ant = l;
        l = l->prox;
        ant->prox = NULL;
    }
    if (l != NULL) {
        i = l;
        l = l->prox;
        i->prox = NULL;
        inicio = i;
    }
    while (l != NULL) {
        if (n % 2 == 0) {
            i->prox = l;
            l = l->prox;
            i = i->prox;
            i->prox = NULL;
        } else {
            ant->prox = l;
            l = l->prox;
            ant = ant->prox;
            ant->prox = NULL;
        }
        n++;
    }

    return inicio;
}