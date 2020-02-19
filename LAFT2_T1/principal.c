#include <stdio.h>
#include <assert.h>
#include "indicadores.h"

int main() {
    float peso, altura, indice;

    printf("Peso (Kg): ");
    scanf("%f", &peso);

    printf("Altura (m): ");
    scanf("%f", &altura);

    assert( (peso > 40 && altura > 1.4) && "Valores muito baixos!");
    assert( (peso < 200 && altura < 2.3) && "Valores muito altos!");

    indice = imc(peso, altura);
    printf("O seu IMC é %f.\n", indice);

    return 0;
}