#include <stdio.h>

void bubble (int v[], int N);
void ex1(int v[], int n, int x);
void ex2(int v[], int n);
int ex3(int v[], int n);
void ex4(int v[], int n);
void ex5(int v[], int n);
void ex7(int v[], int n);

void swap(int v[], int x, int y) {
    int t = v[x];
    v[x] = v[y];
    v[y] = t;
}

int main() {
    int e;
    printf("Exercício: ");
    scanf("%d", &e);
    int x;
    printf("Tamano do array: ");
    scanf("%d", &x);
    int v[x+1];
    int v2[x];
    int y;
    switch (e) {
        case 1:
            printf("Valor a adicionar: ");
            scanf("%d", &y);
            for (int i = 0; i < x; i++) scanf(" %d", &v[i]);
            ex1(v, x+1, y);
            for (int i = 0; i <= x; i++) printf("%d ", v[i]);
            break;
        case 2:
            for (int i = 0; i < x; i++) scanf(" %d", &v2[i]);
            ex2(v2, x);
            for (int i = 0; i < x; i++) printf("%d ", v2[i]);
            break;
        case 3:
            for (int i = 0; i < x; i++) scanf(" %d", &v2[i]);
            printf("%d", ex3(v2, x));
            break;
        case 4:
            for (int i = 0; i < x; i++) scanf(" %d", &v2[i]);
            ex4(v2, x);
            for (int i = 0; i < x; i++) printf("%d ", v2[i]);
            break;
        case 5:
            for (int i = 0; i < x; i++) scanf(" %d", &v2[i]);
            ex5(v2, x);
            for (int i = 0; i < x; i++) printf("%d ", v2[i]);
            break;
        case 6:
            for (int i = 0; i < x; i++) scanf(" %d", &v2[i]);
            bubble(v2, x);
            for (int i = 0; i < x; i++) printf("%d ", v2[i]);
            break;
        case 7:
            for (int i = 0; i < x; i++) scanf(" %d", &v2[i]);
            ex7(v2, x);
            for (int i = 0; i < x; i++) printf("%d ", v2[i]);
            break;
    }
    return 0;
}

void ex1(int v[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (x < v[i]) {
            for (int k = n-1; k > i; k--) {
                v[k] = v[k-1];
            }
            v[i] = x;
            break;
        }
    }
}

//Não sei o que fiz para aqui mas funciona crl
void ex2(int v[], int n) {
    int x;
    for (int i = 1; i < n; i++) {
        x = v[i];
        for (int k = 0; k < n; k++) {
            if (k < i) {
                if (x <= v[k]) {
                    for (int p = i; p > k; p--)
                        v[p] = v[p-1];
                    v[k] = x;
                    break;
                }
            } else {
                if (x > v[k]) {
                    v[k-1] = v[k];
                    v[k] = x;
                } else if (x <= v[k]) {
                    for (int p = i; p > k; p--)
                        v[p] = v[p-1];
                    v[k] = x;
                    break;
                }
            }
        }
    }
}

int ex3(int v[], int n) {
    int r = -1;
    if (n > 0) {
        r = 0;
        for (int i = 1; i < n; i++) {
            if (v[i] > v[r])
                r = i;
        }
    }
    return r;
}

void ex4(int v[], int n) {
    int r = 0;
    for (int i = n-1; i > 0; i--) {
        r = ex3(v, i+1);
        swap(v,r,i);
    }
}

void ex5(int v[], int n) {
    int r = 0, x;
    for (int i = n-1; i > 0; i--) {
        r = ex3(v, i+1);
        x = v[i];
        v[i] = v[r];
        v[r] = x;
    }
}

//ex6 wtf
void bubble (int v[], int n) {
    int i;
    for (i=1;(i<n); i++)
        if (v[i-1] > v[i])
            swap (v,i-1, i);
}

void ex7(int v[], int n) {
    for (int i = n; i > 0; i--) {
        bubble(v, i);
    }
}








