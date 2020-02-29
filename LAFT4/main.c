#include <stdio.h>
#include <stdlib.h>

void soma_elemento(int *arr, int dim, int idx);
void roda_esq(int *arr, int dim, int shifter);
int remove_menores(int *arr, int dim, int valor);

int main() {
    int n, i, *arr, ex;
    printf("Exercício: ");
    scanf("%d", &ex);
    printf("Tamanho do array: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    printf("Array: \n");
    for (int o = 0; o < n; o++) scanf("%d", &arr[o]);

    printf((ex == 1) ? "Indice: " : ((ex == 2) ? "Shifter: " : "Valor: "));
    scanf("%d", &i);
    if (ex == 1) soma_elemento(arr, n, i);
    else if (ex == 2) roda_esq(arr, n, i);
    else if (ex == 3) remove_menores(arr, n, i);

    for (int m = 0; m < n; m++) printf("%d ", arr[m]);
    printf("\n");
    return 0;
}

void soma_elemento(int *arr, int dim, int idx) {
    int num;
    if (idx < dim) {
        num = arr[idx];
        for (int i = 0; i < dim; i++) arr[i] = arr[i] + num;
    }
}

void roda_esq(int *arr, int dim, int shifter) {
    while (shifter >= dim) {
        shifter -= dim;
    }

    int *fim = malloc(shifter * sizeof(int));
    for (int i = 0; i < shifter; i++) fim[i] = arr[i];

    int pos = 0;
    for (int i = shifter; i < dim; i++) arr[pos++] = arr[i];
    for (int i = 0; i < shifter; i++) arr[pos++] = fim[i];
}

int remove_menores(int *arr, int dim, int valor) {
    int *fim, posFim = 0;
    fim = malloc(dim * sizeof(int));
    for (int i = 0; i < dim; i++) if (arr[i] < valor) fim[posFim++] = arr[i];

    int pos = 0;
    for (int i = 0; i < dim; i++) if (arr[i] >= valor) arr[pos++] = arr[i];
    for (int i = 0; i < posFim; i++) arr[pos++] = fim[i];
}
