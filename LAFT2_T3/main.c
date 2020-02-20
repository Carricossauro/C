#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void certo();
void errado();
void op(char o);
int resultado(int x, int y, char o);
void rando(int *x, int *y, int d);

int main() {
    while (1) {
        char j;

        printf("Escolha a operação aritmética: ");
        scanf(" %c", &j);

        op(j);
    }
}

void certo() {
    srand(time(NULL));
    int n = rand() % 5;

    switch (n) {
        case 0:
            printf("Acertaste.\n");
            break;
        case 1:
            printf("Bem jogado!\n");
            break;
        case 2:
            printf("Contas bem feitas!\n");
            break;
        case 3:
            printf("Parabéns! Acertaste!\n");
            break;
        case 4:
            printf("Está certo. Muito bem!\n");
            break;
        default:
            break;
    }
}

void errado() {
    srand(time(NULL));
    int n = rand() % 5;

    switch (n) {
        case 0:
            printf("Não.\n");
            break;
        case 1:
            printf("Errado.\n");
            break;
        case 2:
            printf("Tenta outra vez.\n");
            break;
        case 3:
            printf("Não está certo. :(\n");
            break;
        case 4:
            printf("Não desistas! Tenta outra vez.\n");
            break;
        default:
            break;
    }
}

void rando(int *x, int *y, int d) {
    srand(time(NULL));

    switch (d) {
        case 1:
            *x = 1 + rand() % 100;
            *y = 1 + rand() % 100;
            break;
        case 2:
            *x = 1 + rand() % 1000;
            *y = 1 + rand() % 1000;
            break;
        default:
            *x = 1 + rand() % 10;
            *y = 1 + rand() % 10;
            break;
    }
}

int resultado(int x, int y, char o) {
    switch (o) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return x / y;
    }
}

void op(char o) {
    int x, y, d, resposta;
    printf("Escolhe a dificuldade: ");
    scanf(" %d", &d);
    rando(&x, &y, d);

    while (1) {
        printf("Quanto é %d %c %d", x, o, y);
        scanf(" %d", &resposta);

        if (resposta == resultado(x, y, o)) {
            certo();
            break;
        } else errado();
    }

}