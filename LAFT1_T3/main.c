#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    float area, s;

    //Valores dos lados dos triângulos (maior primeiro)ion
    printf("Introduza os lados do triãngulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if ( abs(b - c) < a && a < (b + c) ) { //Verifica se o triângulo é válido
        printf("É um triângulo ");

        if ( a == b && b == c )
            printf("equilátero. "); //Verifica se os 3 lados são iguais

        else if ( a == b || b == c || a == c )
            printf("isósceles. "); //Verifica se existem dois lados iguais

        else
            printf("escaleno. "); //Não é equilátero nem isósceles, logo é escaleno

         //Calcula e imprime a área
        s = (a + b + c) / 2.0f;
        area = sqrtf(s * (s - a) * (s - b) * (s - c));
        printf("A área do triângulo é de %f.\n", area);

    } else printf("Não é um triângulo.\n"); //output caso não seja um triângulo

    return 0;
}