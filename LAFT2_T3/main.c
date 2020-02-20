#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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

void rando(int *x, int *y, int d) {
    srand(time(NULL));

    *x = rand() % ((int)(pow(10, d)));
    *y = rand() % ((int)(pow(10, d)));
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
    int x, y, d, resposta, cr;
    printf("Escolhe a dificuldade: ");
    scanf(" %d", &d);

    while (1) {
        rando(&x, &y, d);

        char certas[5][50] = {"Acertaste.\n","Bem jogado!\n","Contas bem feitas!\n","Parabéns! Acertaste!\n","Está certo. Muito bem!\n"};
        char erradas[5][50] = {"Não.\n","Errado.\n","Tenta outra vez.\n","Não está certo. :(\n","Não desistas! Tenta outra vez.\n"};

        while (1) {
            printf("Quanto é %d %c %d? ", x, o, y);
            scanf(" %d", &resposta);

            int result = resultado(x, y, o);
            srand(time(NULL));
            if (resposta == result) {
                printf("%s", certas[rand() % 5]);
                break;
            } else printf("%s", erradas[rand() % 5]);
        }
    }
}