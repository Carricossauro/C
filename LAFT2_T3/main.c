#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void certo();
void errado();
int soma(int dif);
int sub(int dif);
int divi(int dif);
int mult(int dif);

int main() {
    while (1) {
        int d;
        char j;

        printf("Escolha a operçação aritmética: ");
        scanf(" %c", &j);

        printf("Escolha a dificuldade: ");
        scanf(" %d", &d);

        if (d == 'x' || j == 'x') return 0;
        switch (j) {
            case '+':
                soma(d);
                break;
            case '-':
                sub(d);
                break;
            case '/':
                divi(d);
                break;
            case '*':
                mult(d);
                break;
            default:
                printf("Operação Inválida!\n");
        }
    }
}

int soma(int dif) {
    srand(time(NULL));
    int x, y, res;

    switch (dif) {
        case 2:
            while (1) {
                x = 1 + rand() % 100;
                y = 1 + rand() % 100;

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
        case 3:
            while (1) {
                x = 1 + rand() % 1000;
                y = 1 + rand() % 1000;

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
        default:
            while (1) {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;

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
}

int sub(int dif) {
    srand(time(NULL));
    int x, y, res;

    switch (dif) {
        case 2:
            while (1) {
                x = 1 + rand() % 100;
                y = 1 + rand() % 100;

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
        case 3:
            while (1) {
                x = 1 + rand() % 1000;
                y = 1 + rand() % 1000;

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
        default:
            while (1) {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;

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
}

int divi(int dif) {
    srand(time(NULL));
    int x, y, res;

    switch (dif) {
        case 2:
            while (1) {
                float re, resto;
                x = 1 + rand() % 100;
                y = 1 + rand() % 10;

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
                }
            }
        case 3:
            while (1) {
                float re, resto;
                x = 1 + rand() % 1000;
                y = 1 + rand() % 10;

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
                }
            }
        default:
            while (1) {
                float re, resto;
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;

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
                }
            }
    }
}

int mult(int dif) {
    srand(time(NULL));
    int x, y, res;

    switch (dif) {
        case 2:
            while (1) {
                x = 1 + rand() % 1000;
                y = 1 + rand() % 10;

                while (1) {
                    printf("Quanto é %d * %d? ", x, y);
                    scanf("%d", &res);

                    if (res == 12345) return 0;
                    if (res == (x * y)) {
                        certo();
                        break;
                    } else errado();
                }
            }
        case 3:
            while (1) {
                x = 1 + rand() % 100;
                y = 1 + rand() % 10;

                while (1) {
                    printf("Quanto é %d * %d? ", x, y);
                    scanf("%d", &res);

                    if (res == 12345) return 0;
                    if (res == (x * y)) {
                        certo();
                        break;
                    } else errado();
                }
            }
        default:
            while (1) {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;

                while (1) {
                    printf("Quanto é %d * %d? ", x, y);
                    scanf("%d", &res);

                    if (res == 12345) return 0;
                    if (res == (x * y)) {
                        certo();
                        break;
                    } else errado();
                }
            }
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