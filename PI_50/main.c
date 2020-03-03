#include <stdio.h>
#include <string.h>
#include "defs.h"

int main() {
    int exercicio, resultado, arr[10] = {1,12,13,14,16,17,47,689,890};
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
        case 11:
            printf("String: ");
            scanf("%s", s1);
            ex11(s1);
            printf("%s", s1);
            break;
        case 12:
            printf("String: ");
            scanf("%s", s1);
            ex12(s1);
            printf("%s", s1);
            break;
        case 13:
            printf("String: ");
            strcpy(s1, "ola mundo cruel");
            ex13(s1, 2);
            printf("%s", s1);
            break;
        case 14:
            printf("String: ");
            strcpy(s1, "mundo cruel!!!");
            *res = ex14(s1);
            printf("%c", *res);
            break;
        case 15:
            printf("String: ");
            scanf("%s", s1);
            resultado = ex15(s1);
            printf("%d", resultado);
            break;
        case 16:
            printf("String: ");
            strcpy(s1, "mundo cruel!!!");
            resultado = ex16(s1);
            printf("%d", resultado);
            break;
        case 17:
            printf("Primeiro string: ");
            scanf("%s", s1);
            printf("Segundo string: ");
            scanf("%s", s2);
            resultado = ex17(s1, s2);
            printf("%d", resultado);
            break;
        case 18:
            printf("Primeiro string: ");
            strcpy(s1, "xax");
            printf("Segundo string: ");
            strcpy(s2, "ax");
            resultado = ex18(s1, s2);
            printf("%d", resultado);
            break;
        case 19:
            printf("Primeiro string: ");
            strcpy(s1, "batota");
            printf("Segundo string: ");
            strcpy(s2, "totalidade");
            resultado = ex19(s1, s2);
            printf("%d", resultado);
            break;
        case 20:
            printf("String: ");
            strcpy(s1, "ola mundo cruel");
            resultado = ex20(s1);
            printf("%d", resultado);
            break;
        case 21:
            printf("String: ");
            strcpy(s1, "ola mundo cruel");
            resultado = ex21(s1);
            printf("%d", resultado);
            break;
        case 22:
            printf("Primeiro string: ");
            strcpy(s1, "braga");
            printf("Segundo string: ");
            strcpy(s2, "bracara augusta");
            resultado = ex22(s1, s2);
            printf("%d", resultado);
            break;
        case 23:
            printf("String: ");
            strcpy(s1, "anna");
            resultado = ex23(s1);
            printf("%d", resultado);
            break;
        case 24:
            printf("String: ");
            strcpy(s1, "anna");
            resultado = ex24(s1);
            printf("%d %s", resultado, s1);
            break;
        case 25:
            printf("String: ");
            strcpy(s1, "an na  sdv dv    fvas");
            resultado = ex25(s1);
            printf("%d %s", resultado, s1);
            break;
        case 26:
            ex26(arr, 9, 12);
            for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
            break;
    }
    return 0;
}
