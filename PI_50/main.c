#pragma ide diagnostic ignored "hicpp-multiway-paths-covered"
#pragma ide diagnostic ignored "cert-err34-c"
#include <stdio.h>
#include "defs.h"

int main() {
    int exercicio, resultado;
    unsigned int a;
    printf("Exercício: ");
    scanf("%d", &exercicio);
    switch (exercicio) {
        case 51:
            resultado = ex1_alt();
            break;
        case 1:
            resultado = ex1();
            break;
        case 2:
            resultado = ex2();
            break;
        case 3:
            resultado = ex3();
            break;
        case 4:
            printf("Introduza o número: ");
            scanf("%d", &a);
            resultado = ex4(a);
            break;
        case 5:
            printf("Introduza o número: ");
            scanf("%d", &a);
            resultado = ex5(a);
            break;
        case 6:
            printf("Introduza o número: ");
            scanf("%d", &a);
            resultado = ex6(a);
            break;
        default:
            return 0;
    }
    printf("%d", resultado);
    return 0;
}
int ex1_alt() {
    int ar[50], els = 0;
    //Recebe a sequência
    printf("Sequência de números:\n");
    for (int i = 0;i <= 50;i++) {
        scanf("%d", &ar[i]);
        if (ar[i] == 0) break;
    }
    //Conta os elementos da sequência
    for (int i = 0;i <= 50;i++) {
        if (ar[i] != 0)
            els++;
        else break;
        }
    //Cria um array com x elementos (x é a quantidade de números que pusermos antes do 0)
    int seq[els];
    //Guarda no array criado a sequência
    for (int i = 0; i <= els;i++) {
        seq[i] = ar[i];
    }
    //Verifica o maior elemento da sequência
    int maior;
    maior = seq[0];
    for (int i = 1; i <= els;i++) {
        if (seq[i] > maior)
            maior = seq[i];
    }
    //...
    return maior;
}

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
    }
    //Conta a quantidade de números dados
    for (int i = 0;i <= 50; i++) {
        if (ar[i] == 0) break;
        else els++;
    }
    //Calcula a média
    media = soma/els;
    return soma;
}

int ex3() {
    int ar[50], maior, segundo, nset = 1;
    printf("Sequência:\n");
    //Determina o maior elemento da sequência (enquanto a recebe)
    for (int i = 0; i < 49; i++) {
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