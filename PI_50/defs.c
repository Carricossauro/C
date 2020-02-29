#include "defs.h"
#include <string.h>
#include <stdio.h>

int ex1() {
    int ar[50], maior;
    printf("Sequência:\n");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &ar[i]);
        if (ar[i] == 0) break;
        if (i == 0) maior = i;
        else if (ar[i] > maior) {
            maior = ar[i];
        }
    }
    return maior;
}

int ex2() {
    float ar[50], soma = 0, els = 0, media;
    printf("Sequência:\n");
    //Recebe a sequência
    for (int i = 0; i < 50; i++) {
        scanf("%f",&ar[i]);
        if (ar[i] == 0) break;
        soma += ar[i];
        els++;
    }

    //Calcula a média
    media = soma/els;
    return media;
}

int ex3() {
    int ar[50], maior, segundo, nset = 1;
    printf("Sequência:\n");
    //Determina o maior elemento da sequência (enquanto a recebe)
    for (int i = 0; i <= 49; i++) {
        scanf("%d", &ar[i]);
        if (ar[i] == 0) break;
        if (i == 0) maior = ar[i];
        else if (ar[i] > maior) maior = ar[i];
    }
    //Determina o segundo maior elemento
    for (int i = 0;i <= 49; i++) {
        if (ar[i] == 0) break;
        if (ar[i] != maior) {
            if (nset) {
                nset = 0;
                segundo = ar[i];
            } else if (ar[i] > segundo) {
                segundo = ar[i];
            }
        }
    }
    return segundo;
}

int ex4(unsigned int a) {
    int uns = 0;
    while ((a / 2) != 0) {
        if (a % 2 == 1) uns++;
        a /= 2;
    }
    if (a % 2 == 1) uns++;
    return uns;
}

int ex5(unsigned int a) {
    int zs = 0;
    while ((a / 2) != 0) {
        if (a % 2 == 0) zs++;
        a /= 2;
    }
    if (a % 2 == 0) zs++;
    return zs;
}

int ex6(unsigned int a) {
    int x = 0;
    for (int i = 1; 1; i *= 10) {
        if (a / i == 0) break;
        else x++;
    }
    return x;
}

void *ex7(char s1[], char s2[]) {
    int size, size2;
    size = strlen(s1);
    size2 = strlen(s2);
    for (int i = 0; i < size2; i++) {
        s1[size + i] = s2[i];
    }
}

char *ex8(char *dest, char *source) {
    int i;
    for (i = 0; source[i] != '\0'; i++)
        dest[i] = source[i];
    dest[i] = '\0';
    return dest;
}

int ex9(char s1[], char s2[]) {
    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    return (s1[i] - s2[i]);
}

char *ex10(char s1[], char s2[]) {
    char *p = NULL, p1 = 0, p2 = 0, n = strlen(s1) - 1, pSave = 0;
    while (p1 < n) {
        if (s1[p1] == s2[p2]) {
            pSave = p1;
            while (1) {
                if (s2[p2] == '\0') {
                    p = s1 + pSave;
                    break;
                }
                if (s1[p1++] != s2[p2++]) break;
            }
            if (p != NULL) break;
        }
        p1++;
    }
    return p;
}