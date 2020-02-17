#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, bits;
    if (argc > 2) {
        bits = atoi(argv[1]);
        x = atoi(argv[2]);
    } else {
        printf("Número: ");
        scanf("%d", &x);
        printf("Bits: ");
        scanf("%d", &bits);
    }

    int i, ar[bits];
    for (i = 0;i <= bits; i++) ar[i] = 0;

    i = 0;
    while (x >= 2) {
        ar[i] = (x % 2);
        x /= 2;
        i++;
    }
    ar[i] = x % 2;
    for (i = bits - 1; i >= 0; i--) {
        printf("%d", ar[i]);
    }

    putchar('\n');
    return 0;
}
