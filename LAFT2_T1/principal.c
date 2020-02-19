#include <stdio.h>
#include "indicadores.h"

int main() {
    float peso, altura, indice;
    printf("Peso (Kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);
    indice = imc(peso, altura);
    printf("O seu IMC é %f.\n", indice);
    return 0;
}