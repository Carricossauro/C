#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
typedef struct queue {
    int inicio;
    int tamanho;
    int *valores;
} QUEUE;

void initQueue(QUEUE *q);
int isEmpty(QUEUE *q);
int enqueue(QUEUE *q, int x);
int dequeue(QUEUE *q, int *x);
int front(QUEUE *q, int *x);
void reallocate(QUEUE *q);
void reallocate2(QUEUE *q);

int main() {
    QUEUE *q = (QUEUE *) malloc(sizeof(QUEUE));
    initQueue(q);
    char linha[MAX], comando[MAX];
    int num;
    int over = 1;

    do {
        printf("Comando: ");
        fgets(linha, MAX, stdin);
        if (sscanf(linha, "%s", comando) == 1) {
            if (!strcmp(comando, "empty")) {
                printf("Empty? ");
                printf((isEmpty(q) == 0) ? "Sim" : "Não");

            } else if (!strcmp(comando, "enqueue") && sscanf(linha, "%s %d", comando, &num) == 2) {
                if (!enqueue(q, num))
                    printf("Adicionado com sucesso.");
                else
                    printf("Erro ao adicionar o valor.");

            } else if (!strcmp(comando, "dequeue")) {
                if (!dequeue(q, &num))
                    printf("Removido o número %d.", num);
                else
                    printf("Erro ao remover o número.");

            } else if (!strcmp(comando, "front")) {
                if (!front(q, &num))
                    printf("O número no início da queue é %d.", num);
                else
                    printf("Erro ao retirar o último elemento da queue.");

            } else if (!strcmp(comando, "sair")) over = 0;
            putchar('\n');
        }
    } while(over);
    return 0;
}

void initQueue(QUEUE *q) {
    q->inicio = 0;
    q->tamanho = 0;
    q->valores = malloc(q->tamanho * sizeof(int));
}

int isEmpty(QUEUE *q) {
    return q->inicio;
}

int enqueue(QUEUE *q, int x) {
    int r = 0;

    reallocate(q);
    q->valores[q->inicio++] = x;
    return r;
}

int dequeue(QUEUE *q, int *x) {
    int r = 0;
    if (q->inicio == 0)
        r = 1;
    else {
        q->inicio--;
        *x = q->valores[q->inicio];
        reallocate2(q);
    }
    return r;
}

int front(QUEUE *q, int *x) {
    int r = 0;
    if (q->inicio == 0)
        r = 1;
    else {
        *x = q->valores[q->inicio - 1];
    }
    return r;
}

void reallocate(QUEUE *q) {
    int v[q->inicio];
    for (int i = 0; i < q->inicio; i++)
        v[i] = q->valores[i];
    free(q->valores);
    q->tamanho++;
    q->valores = malloc(q->tamanho * sizeof(int));
    for (int i = 0; i < q->inicio; i++)
        q->valores[i] = v[i];
}

void reallocate2(QUEUE *q) {
    int v[q->inicio];
    for (int i = 0; i < q->inicio; i++)
        v[i] = q->valores[i];
    free(q->valores);
    q->tamanho--;
    q->valores = malloc(q->tamanho * sizeof(int));
    for (int i = 0; i < q->inicio; i++)
        q->valores[i] = v[i];
}