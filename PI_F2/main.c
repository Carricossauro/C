#include <stdio.h>

float multInt(int n, float m);
int ex2(int n, int m);
int mdc(int a, int b);
int mdc2(int a, int b);
int fib(int n);
int fib2(int n);

int main() {
    int ex, n, y;
    float m;
    printf("Exercício: ");
    scanf("%d", &ex);
    switch (ex) {
        case 1:
            printf("n = ");
            scanf("%d", &n);
            printf("m = ");
            scanf("%f", &m);
            printf("%f", multInt(n, m));
            break;
        case 2:
            printf("n = ");
            scanf("%d", &n);
            printf("m = ");
            scanf("%d", &y);
            printf("%d", ex2(n, y));
            break;
        case 3:
            printf("a = ");
            scanf("%d", &n);
            printf("b = ");
            scanf("%d", &y);
            printf("%d", mdc(n, y));
            break;
        case 4:
            printf("a = ");
            scanf("%d", &n);
            printf("b = ");
            scanf("%d", &y);
            printf("%d", mdc2(n, y));
            break;
        case 5:
            printf("x = ");
            scanf("%d", &n);
            printf("%d", fib(n));
            break;
        case 6:
            printf("x = ");
            scanf("%d", &n);
            printf("%d", fib2(n));
            break;
        default:
            printf("\nEscolhe um exercício que esteja feito...");
            break;
    }
    return 0;
}

float multInt(int n, float m) {
    float r = 0;
    while (n > 0) {
        r+=m;
        n--;
    }
    return r;
}

int ex2(int n, int m) {
    int soma = 0;
    while (n >= 1) {
        if (n % 2 != 0) soma+=m;
        n/=2;
        m*=2;
    }
    return soma;
}

int mdc(int a, int b) {
    int maior = 1;

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for (int i = a; i >= 1 ; i--) {
        if (a % i == 0 && b % i == 0) {
            maior = i;
            break;
        }
    }

    return maior;
}

int mdc2(int a, int b) {
    while (1) {
        if (b == 0) return a;
        else if (a == 0) return b;
        else if (a >= b) a -= b;
        else if (b > a) b -= a;
    }
}

int fib(int n) {
    if (n <= 2) return 1;
    else return (fib(n - 1) + fib(n - 2));
}

int fib2(int n) {
    int c, a = 1, b = 1;
    if (n == 0) return a;
    for (int i = 2; i < n; i++) {
        c = a;
        a = b;
        b += c;
    }
    return b;
}