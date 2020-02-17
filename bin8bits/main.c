#include <stdio.h>

int main() {
    printf("Número: ");
    int a, i = 0, bin[] = {0,0,0,0,0,0,0,0};
    scanf("%d", &a);
    while (a >= 2) {
        bin[i] = (a % 2);
        a /= 2;
        i++;
    }
    bin[i] = (a % 2);
    for (i = 7; i >= 0; i--) {
        printf("%d", bin[i]);
    }
    putchar('\n');
    return 0;
}
