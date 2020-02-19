#include <stdio.h>
#include "triangulo.h"

void triangulo(int p) {
    int x=p, n=1, a;
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