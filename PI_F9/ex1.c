#include <stdlib.h>

typedef struct abin {
    char *pal;
    int ocor;
    struct abin *esq, *dir;
} *Dicionario;

void initDic(Dicionario *d) {
    *d = NULL;
}

    int acrescenta(Dicionario *d, char *pal) {
        Dicionario t = *d, n = NULL;
        while (t!=NULL) {
            n = t;
            if (!strcmp(pal, t->pal))
                break;
            if (strcmp(pal, t->pal) < 0)
                t = t->esq;
            else t = t->dir;
        }
        if (t == NULL) {
            t = malloc(sizeof(struct abin));
            t->pal = calloc(strlen(pal)+1,sizeof(char));
            strcpy(t->pal, pal);
            t->esq = NULL;
            t->dir= NULL;
            t->ocor = 1;
            if (n != NULL) {
                if (strcmp(pal, n->pal) < 0)
                    n->esq = t;
                else n->dir = t;
            } else *d = t;
        } else {
            if (!strcmp(pal, t->pal)) {
                t->ocor++;
            }
        }
        return t->ocor;
    }

char *maisFreq(Dicionario d, int *c) {
    *c = 0;
    char *palavra;
    if (d != NULL) {
        *c = d->ocor;
        palavra = d->pal;
        int x;
        char *es = maisFreq(d->esq, &x);
        if (x > *c) {
            *c = x;
            palavra = es;
        }
        char *di = maisFreq(d->dir, &x);
        if (x > *c) {
            *c = x;
            palavra = di;
        }
    } else {
        palavra = NULL;
    }
    return palavra;
}

int main() {
    Dicionario d;
    int x;
    char *pal;
    initDic(&d);
    int a = acrescenta(&d, "LCC");
    a = acrescenta(&d, "MIEI");
    a = acrescenta(&d, "CC");
    a = acrescenta(&d, "LCC");
    a = acrescenta(&d, "MIEI");
    a = acrescenta(&d, "FAGGOT");
    a = acrescenta(&d, "MIEI");
    pal = maisFreq(d, &x);
    return 0;
}