#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void certo();
void errado();
int soma();
int sub();
int divi();
int mult();
void rando(int *x, int *y, int d);

int main() {
    while (1) {
        char j;

        printf("Escolha a operação aritmética: ");
        scanf(" %c", &j);

        if (j == 'x') return 0;
        switch (j) {
            case '+':
                soma();
                break;
            case '-':
                sub();
                break;
            case '/':
                divi();
                break;
            case '*':
                mult();
                break;
            default:
                printf("Operação Inválida!\n");
        }
    }
}

int soma() {
    int x, y, res, dif;
    printf("Escolha a dificuldade: ");
    scanf(" %d", &dif);

    while (1) {
        rando(&x, &y, dif);

        while (1) {
            printf("Quanto é %d + %d? ", x, y);
            scanf("%d", &res);

            if (res == 12345) return 0;
            if (res == (x + y)) {
                certo();
                break;
            } else errado();
        }
    }
}

int sub() {
    int x, y, res, dif;
    printf("Escolha a dificuldade: ");
    scanf(" %d", &dif);

    while (1) {
        rando(&x, &y, dif);

        while (1) {
            printf("Quanto é %d - %d? ", x, y);
            scanf("%d", &res);

            if (res == 12345) return 0;
            if (res == (x - y)) {
                certo();
                break;
            } else errado();
        }
    }
}

int divi() {
    int x, y, dif;
    float re, resto;
    printf("Escolha a dificuldade: ");
    scanf(" %d", &dif);

    while (1) {
        rando(&x, &y, dif);

        while (1) {
            printf("Quanto é %d / %d? ", x, y);
            scanf("%f", &re);

            if (re == 12345) return 0;
            if (re == (x / y)) {
                certo();
                while (1) {
                    printf("Resto: ");
                    scanf("%f", &resto);

                    if (resto == 12345) return 0;
                    if (resto == (x % y)) {
                        certo();
                        break;
                    } else errado();
                }
                break;
            } else errado();
        }}
}

int mult() {
    int x, y, res, dif;
    printf("Escolha a dificuldade: ");
    scanf(" %d", &dif);

    while (1) {
        rando(&x, &y, dif);

        while (1) {
            printf("Quanto é %d * %d? ", x, y);
            scanf("%d", &res);

            if (res == 12345) return 0;
            if (res == (x * y)) {
                certo();
                break;
            } else errado();
        }}
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