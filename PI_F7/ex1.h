#ifndef PI_F7_EX1_H
#define PI_F7_EX1_H

typedef struct slist *LInt;

struct slist {
    int valor;
    LInt prox;
} Nodo;

LInt snoc(LInt a, int n);
LInt cons(LInt a, int n);
LInt tail(LInt a);
void init(LInt a);
LInt concat(LInt a, LInt b);
int ex1();

#endif //PI_F7_EX1_H
