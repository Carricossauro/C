#include <stdio.h>

void quad();
void chad();
void tria1();
void tria2();
int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        switch (n) {
            case 2:
                quad();
                break;
            case 3:
                chad();
                break;
            case 4:
                tria1();
                break;
            case 5:
                tria2();
                break;
            default:
                return 0;
        }
    }
}

void quad() {
    int x = 1;
    printf("Dimensão: ");
    scanf("%d", &x);
    for (int i=1;i<=x;i++) {
        for (int a=1;a<=x;a++) {
            putchar('#');
        }
        putchar('\n');
    }
    return 0;
}

void chad() {
    int x, y = 0;
    printf("Dimensão: ");
    scanf("%d", &x);
    for (int i = 1;i <= x;i++) {
        if (y) {
            for (int a = 1;a <= x;a++) {
                if (y) {
                    putchar('_');
                    y = 0;
                } else {
                    putchar('#');
                    y = 1;
                }
            }
            y = 0;
        } else {
            for (int a = 1;a <= x;a++) {
                if (y) {
                    putchar('_');
                    y = 0;
                } else {
                    putchar('#');
                    y = 1;
                }
            }
            y = 1;
        }
        putchar('\n');
    }
}

void tria1() {
    int x;
    printf("Dimensão: ");
    scanf("%d", &x);
    for (int i = 1; i<=x;i++) {
        for (int a=1;a<=i;a++) {
            putchar('#');
        }
        putchar('\n');
    }
    for (int i = (x-1); i>=1;i--) {
        for (int a = i;a>=1;a--) {
            putchar('#');
        }
        putchar('\n');
    }
}

void tria2()
{
    int x, n=1, a;
    printf("Dimensão: ");
    scanf("%d", &x);
    for (int i = 1; i <= x;i++) {
        for (a = 1;a <= (x-i);a++) {
            putchar(' ');
        }
        for (int i = 1;i <= n;i++) {
            putchar('#');
        }
        n+=2;
        putchar('\n');
    }
}