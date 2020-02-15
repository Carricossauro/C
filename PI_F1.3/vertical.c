#include <stdio.h>
#include "triangulo.h"

void triangulo(int n) {
    int x = n;
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