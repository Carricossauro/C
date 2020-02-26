#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swapM(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void swap(int v[], int i, int j) {
    int t = v[i];
    v[i] = v[j];
    v[j] = t;
}

int soma(int  v[], int n) {
    int som = 0;
    for (int i = 0; i < n; i++)
        som += v[i];
    return som;
}

int maximum(int v[], int n, int *m) {
    *m = v[0];
    for (int i = 0; i < n; i++) if (v[i] > *m) m = v + i;
    if (n < 0) return 1;
    else return 0;
}

void quadrados(int q[], int n) {
    for (int i = 0; i < n; i++) q[i] = pow(q[i], 2);
}

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

void pascal(int g[], int n) {
    int i, p = fact(n);
    for (i = 0; i <= n; i++)
        g[i] = p / (fact(i) * fact(n - i));
}

int main() {
    int ex, x, y, ar[] = {1,2,3,4,5}, *m = &x, *g;
    printf("Exercício: ");
    scanf("%d", &ex);
    switch (ex) {
        case 2:
            x = 3;
            y = 5;
            swapM(&x, &y);
            printf("%d, %d", x, y);
            break;
        case 3:
            swap(ar, 2, 3);
            for (int i = 0; i < 5; i++) printf("%d", ar[i]);
            break;
        case 4:
            ex = soma(ar, 5);
            printf("%d", ex);
            break;
        case 5:
            maximum(ar, 5, m);
            printf("%d", *m);
            break;
        case 6:
            quadrados(ar, 5);
            for (int i = 0; i < 5; i++) printf("%d, ", ar[i]);
            break;
        case 7:
            printf("n = ");
            scanf("%d", &x);
            g = malloc((x+1) * sizeof(int));
            pascal(g, x);
            for (int i = 0; i <= x; i++) printf("%d ", g[i]);
            break;
    }
    return 0;
}