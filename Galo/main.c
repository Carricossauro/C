#include <stdio.h>
#include <stdlib.h>

void printTabuleiro(char *tab[]);
void player(char *tab[], int p);
int valida(char *tab[], int n,int p);
int ganho(char *tab[]);

int main() {
    char l1[] = {' ',' ',' '}, l2[] = {' ',' ',' '}, l3[] = {' ',' ',' '};
    char *tab[] = {l1, l2, l3};
    int jog = 0, p = 1, g = 0;
    printTabuleiro(tab);
    while (jog < 9 && g == 0) {
        if (p == 1) {
            player(tab, 1);
            g = ganho(tab);
            p = 2;
        } else {
            player(tab, 2);
            g = ganho(tab);
            p = 1;
        }
        jog++;
    }
    g = ganho(tab);
    printf((g == 0) ? "Empate\n" : "Vitória do jogador %d!\n", g);
    return 0;
}

void player(char *tab[], int p) {
    int n, j = 0;

    while (!j) {
        printf("Jogada do player %d: ", p);
        scanf("%d", &n);
        j = valida(tab, --n, p);
    }
}

int ganho(char *tab[]) {
    printTabuleiro(tab);
    int res = 0, ganho = 1;
    for (int i = 0; i < 3; i++)
        if (tab[i][0] == tab[i][1] && tab[i][0] == tab[i][2]) {
            res = ((tab[i][0] == 'X') ? 1 : (tab[i][0] == 'O') ? 2 : 0);
            ganho = 0;
            break;
        }

    for (int i = 0; i < 3 && ganho; i++)
        if (tab[0][i] == tab[1][i] && tab[2][i] == tab[0][i]) {
            res = ((tab[0][i] == 'X') ? 1 : (tab[0][i] == 'O') ? 2 : 0);
            ganho = 0;
            break;
        }

    if (tab[1][1] != ' ' && res == 0 && ganho) {
        if (tab[1][1] == tab[0][0])
            if (tab[1][1] == tab[2][2])
                res = ((tab[1][1] == 'X') ? 1 : 2);

        if (tab[1][1] == tab[0][2])
            if (tab[1][1] == tab[2][0])
                res = ((tab[1][1] == 'X') ? 1 : 2);
    }

    return res;
}

int valida(char *tab[], int n,int p) {
    int jogado = 0;

    int m = (n <= 2) ? 2 : (n <= 5) ? 1 : 0;
    n = (n <= 2) ? n : (n <= 5) ? n - 3 : n - 6;

    if (tab[m][n] == ' ') {
        tab[m][n] = (p == 1) ? 'X' : 'O';
        jogado++;
    } else printf("E jogares? ");

    return jogado;
}

void printTabuleiro(char *tab[]) {
    system("clear");
    for (int o = 0; o < 3; o++)
        for (int i = 0; i < 3; i++) printf((i == 0) ? "| %c |" : (i == 2) ? " %c |\n" : " %c |", tab[o][i]);
}