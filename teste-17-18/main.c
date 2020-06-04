#include <stdlib.h>

typedef struct slist {
    int valor;
    struct slist *prox;
} *LInt;

typedef struct abin {
    int valor;
    struct abin *esq, *dir;
} *ABin;


int retiraNeg(int v[], int N) {
    int i, pos = -1;
    for (pos = 0, i = 0; i < N; i++) {
        if (v[i] >= 0) v[pos++] = v[i];
    }
    return pos;
}

// Codeboard não funciona lol
int difConsecutivos(char s[]) {
    int r = 1, p, max = -1, i;
    for(i = 0; s[i] != '\0'; i++) {
        for(p = i+1; s[p] != '\0' && s[p] != s[p-1]; p++, r++)
            if (s[p] == ' ') { p++; r--; }
        if (r > max) max = r;
        r = 1;
        i = p;
    }
    return max;
}

int maximo(LInt l) {
    int x = l->valor;
    l = l->prox;
    while (l != NULL) {
        if (l->valor > x) x = l->valor;
    }
    return x;
}

int removeAll(LInt *lista, int x) {
    LInt l = *lista, ant = NULL;
    int r = 0;
    while (l != NULL) {
        if (l->valor == x) {
            r++;
            if (ant != NULL) {
                ant->prox = l->prox;
                free(l);
                l = ant;
            } else {
                *lista = l->prox;
            }
        } else ant = l;
        l = l->prox;
    }
    return r;
}

LInt arrayToList(int v[], int N){
    LInt t, l = NULL, inicio;
    if (N > 0) {
        l = malloc(sizeof(struct slist));
        l->valor = v[0];
        l->prox = NULL;
    }
    inicio = l;
    for(int i = 1; i < N; i++) {
        t = malloc(sizeof(struct slist));
        t->valor = v[i];
        t->prox = NULL;
        l->prox = t;
        l = t;
    }
    return inicio;
}

int minheapOK(ABin a) {
    if (a != NULL) {
        if (a->esq == NULL) {
            if (a->dir == NULL) return 1;
            else if (a->valor < a->dir->valor) return minheapOK(a->dir);
        } else if (a->dir == NULL) return minheapOK(a->esq);
        else if (a->valor < a->dir->valor && a->valor < a->esq->valor)
            return minheapOK(a->esq) && minheapOK(a->dir);
        return 0;
    } else return 1;
}

int maxHeap(ABin a) {
    int x, y = a->valor;
    if (a != NULL) {
        if (a->esq == NULL && a->dir == NULL) {
            return y;
        } else if (a->esq == NULL) {
            x = maxHeap(a->dir);
            return x;
        } else if (a->dir == NULL) {
            x = maxHeap(a->esq);
            return x;
        } else {
            x = maxHeap(a->esq);
            y = maxHeap(a->dir);
            if (y > x) x = y;
            return x;
        }
    }
}

void acrescenta(ABin *a, ABin b) {
    ABin t = *a;
    if (b != NULL) {
        while (t != NULL && t->esq != NULL && t->dir != NULL) {
            if (b->valor > t->esq->valor) t = t->esq;
            else if (b->valor < t->esq->valor) break;
        }
        ABin novo;
        novo = malloc(sizeof(struct abin));
        novo->valor = b->valor;
        novo->dir = NULL;
        novo->esq = NULL;
        if (t->esq == NULL) t->esq = novo;
        else if (t->dir == NULL) t->dir = novo;
        else {
            novo->esq = t->esq;
            t->esq = novo;
        }
        acrescenta(a, b->esq);
        acrescenta(a, b->dir);
    }
}

void removeMin(ABin *a) {
    if ((*a)->esq == NULL) *a = (*a)->dir;
    else if ((*a)->dir == NULL) *a = (*a)->esq;
    else if ((*a)->esq->valor > (*a)->dir->valor) {
        ABin esq = (*a)->esq;
        ABin dir1 = (*a)->dir->esq;
        ABin dir2 = (*a)->dir->dir;
        *a = (*a)->dir;
        (*a)->esq = dir1;
        (*a)->dir = dir2;
        acrescenta(a, esq);
    } else if ((*a)->esq->valor < (*a)->dir->valor) {
        ABin dir = (*a)->dir;
        ABin esq1 = (*a)->esq->esq;
        ABin esq2 = (*a)->esq->dir;
        *a = (*a)->esq;
        (*a)->esq = esq1;
        (*a)->esq = esq2;
        acrescenta(a, dir);
    }
}

int maxInd(int v[], int n) {
    int r = 0;
    for(int i = 1; i < n; i++) {
        if (v[i] > v[r]) r = i;
    }
    return r;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int kMaior (int v[], int n, int k) {
    int m = -1;
    if (n > 0 && k <= n) {
        for(int i = 0; i < n; i++) {
            int x = maxInd(v+i, n-i) + i;
            swap(v + i, v + x);
        }
        m = v[k-1];
    }
    return m;
}