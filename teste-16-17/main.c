#include <stdlib.h>

//Parte A

typedef struct slist {
    int valor;
    struct slist *prox;
} *LInt;

typedef struct nodo {
    int valor;
    struct nodo *esq, *dir;
} *ABin;

int limpaEspacos(char s[]) {
    int i = 0, o;
    if (s[0] != '\0') {
        for(i = 0; s[i+1] != '\0'; i++) {
            if (s[i] == ' ' && s[i+1] == ' ') {
                for(o = i+2; s[o-1] != '\0'; o++) {
                    s[o-1] = s[o];
                }
                i--;
            }
        }
        i++;
    }
    return i;
}

void transposta(int n, float m[n][n]) {
    float t[n][n];
    for (int i = 0; i < n; i++) {
        for(int k = 0; k < n; k++)
            t[k][i] = m[i][k];
    }
    for (int i = 0; i < n; i++) {
        for(int k = 0; k < n; k++)
            m[i][k] = t[i][k];
    }
}

LInt cloneL(LInt t) {
    LInt inicio = NULL, l;

    if (t != NULL) {
        l = malloc(sizeof(struct slist));
        l->valor = t->valor;
        l->prox = NULL;
        t = t->prox;
        while (t != NULL) {
            LInt tmp = malloc(sizeof(struct slist));
            tmp->valor = t->valor;
            tmp->prox = NULL;
            l->prox = tmp;
            l = tmp;
            t = t->prox;
        }
    }
    return inicio;
}

int nivelV(ABin a, int n, int v[]) {
    if (a != NULL) {
        if (n > 1) {
            int esq = nivelV(a->esq, n - 1, v);
            int dir = nivelV(a->dir,  n - 1, v + esq);
            return esq + dir;
        } else if (n == 1){
            v[0] = a->valor;
            return 1;
        }
    }
    return 0;
}

void removeMaiorA(ABin *a) {
    ABin l = *a, tmp;

    if (l != NULL) {
        if (l->dir == NULL) {
            tmp = l->esq;
            free(l);
            *a = tmp;
        } else {
            ABin ant;
            while(l->dir != NULL) {
                ant = l;
                l = l->dir;
            }
            tmp = l->esq;
            free(l);
            ant->dir = tmp;
        }
    }
}

//Parte B
#define MAXc 3 //Para o cLion não dar erros

typedef struct chunk {
    int vs [MAXc];
    struct chunk *prox;
} *CList;

typedef struct stackC {
    CList valores;
    int sp;
} StackC;

int push(StackC *s, int x) {
    StackC t = *s;
    CList p = t.valores;
    if (t.sp == MAXc) {
        t.sp = 1;
        CList tmp = malloc(sizeof(int) * MAXc);
        tmp->vs[0] = x;
        tmp->prox = p;
        p = tmp;
    } else {
        p->vs[t.sp-1] = x;
        t.sp++;
    }
    return 0;
}

int pop(StackC *s, int x) {
    StackC t = *s;
    CList p = t.valores;
    if (t.sp == 1) {
        CList tmp = p->prox;
        free(p);
        t.sp = MAXc;
        p = tmp;
    } else t.sp--;
    return 0;
}

int size(StackC s) {
    int r = 0;
    CList t = s.valores;
    while(t != NULL) {
        r++;
        t = t->prox;
    }
    return r + s.sp;
}

//Vou na fé que nao saia lol
