#include <stdio.h>
#include "ex1.h"
#include "ex2.h"

int main() {
    int x;
    printf("Exercício: ");
    scanf("%d", &x);
    if (x == 1)
        ex1();
    else if (x == 2)
        ex2();
    return 0;
}
