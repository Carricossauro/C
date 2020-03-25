#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
typedef struct queue {
    int inicio, tamanho, size;
    int *valores;
} QUEUE;

// [1,2,_,_,_]
// [_,2,_,_,_]
// [_,2,3,_,_]

int recria(QUEUE *q) {
    int i;
    int *nValues = malloc((2 * q->size) * sizeof(int));
    q->valores = realloc(q, (2 * q->size) * sizeof(int));

    if (nValues == NULL) return -1;

    for (i = q->inicio; i < q->tamanho; i++) {
        nValues[i] = q->valores[(q->inicio + i) % q->size];
    }

    q->size *= 2;
    q->inicio = 0;
    q->valores = nValues;
    return 0;
}

void initQueue(QUEUE *q) {
    q->size = 5;
    q->inicio = 0;
    q->valores = malloc(5*sizeof(int));
    q->tamanho = 0;
}

int isEmptyQ(QUEUE *q) {
    return !(q->tamanho);
}

int enqueue(QUEUE *q, int x) {
    if (q->tamanho == q->size) {
        int e = recria(q);
        if (e == -1)
            return -1;
    }

    q->valores[(q->tamanho + q->inicio) % q->size] = x;
    q->tamanho++;

    return 0;
}

int dequeue(QUEUE *q, int *x) {
    if (q->tamanho >= 0) {
        *x = q->valores[q->inicio];
        q->inicio = q->inicio+1 % q->size;
        q->tamanho--;
        return 0;
    }

    return -1;
}

int front(QUEUE *q, int *x) {
    if (q->tamanho >= 0) {
        *x = q->valores[q->inicio];
        return 0;
    }

    return -1;
}

int main() {
    QUEUE q2;
    QUEUE *q = &q2;
    int x;
    initQueue(q);
    for (int i = 1; i <= 3; i++)
        enqueue(q,i);
    dequeue(q, &x);
    front(q, &x);
}