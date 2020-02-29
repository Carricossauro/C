#pragma ide diagnostic ignored "hicpp-multiway-paths-covered"
#pragma ide diagnostic ignored "cert-err34-c"
#include <stdio.h>
#include "defs.h"

int main() {
    int exercicio, resultado;
    unsigned int a;
    char s1[50], s2[50], *res;
    printf("Exercício: ");
    scanf("%d", &exercicio);
    switch (exercicio) {
        case 1:
            resultado = ex1();
            printf("Resultado: %d\n", resultado);
            break;
        case 2:
            resultado = ex2();
            printf("Resultado: %d\n", resultado);
            break;
        case 3:
            resultado = ex3();
            printf("Resultado: %d\n", resultado);
            break;
        case 4:
            printf("Introduza o número: ");
            scanf("%d", &a);
            resultado = ex4(a);
            printf("Resultado: %d\n", resultado);
            break;
        case 5:
            printf("Introduza o número: ");
            scanf("%d", &a);
            resultado = ex5(a);
            printf("Resultado: %d\n", resultado);
            break;
        case 6:
            printf("Introduza o número: ");
            scanf("%d", &a);
            resultado = ex6(a);
            printf("Resultado: %d\n", resultado);
            break;
        case 7:
            printf("Primeiro string: ");
            scanf("%s", s1);
            printf("Segundo string: ");
            scanf("%s", s2);
            ex7(s1, s2);
            printf("%s", s1);
            break;
        case 8:
            printf("String: ");
            scanf("%s", s1);
            ex8(s1, s2);
            printf("%s", s2);
            break;
        case 9:
            printf("Primeiro string: ");
            scanf("%s", s1);
            printf("Segundo string: ");
            scanf("%s", s2);
            resultado = ex9(s1, s2);
            printf("%d", resultado);
            break;
        case 10:
            printf("Primeiro string: ");
            scanf("%s", s1);
            printf("Segundo string: ");
            scanf("%s", s2);
            res = ex10(s1, s2);
            printf("%s\n", res);
            break;
    }
    return 0;
}
