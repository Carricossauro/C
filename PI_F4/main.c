#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100
typedef struct stack {
    int sp;
    int valores [MAX];
} STACK;

int minusculas(char s[]);
int contalinhas(char s[]);
int contaPal(char s[]);
int procura(char p[], char *ps[], int n);
void initStack(STACK *s);
int isEmptyS(STACK *s);
int push(STACK *s, int x);
int pop(STACK *s, int *x);
int top(STACK *s, int *x);

int main() {
    char s[14] = "Adae fT\nbP", p[5] = "abcde", *ps[] = {"fsdas","fdasd","abcde","ncjgo","bhljk"};
    int ex;
    printf("Exercício: ");
    scanf("%d", &ex);
    switch (ex) {
        case 1:
            minusculas(s);
            printf("%s", s);
            break;
        case 2:
            ex = contalinhas(s);
            printf("%d", ex);
            break;
        case 3:
            ex = contaPal(s);
            printf("%d", ex);
            break;
        case 4:
            ex = procura(p, ps, 5);
            printf("%d", ex);
            break;
    }
    return 0;
}

int minusculas(char s[]) {
    int subs = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32;
            subs++;
        }
    }
    return subs;
}

int contalinhas(char s[]) {
    int res = s[0] != '\0';

    for(int i = 0; s[i] != '\0'; i++)
        if (s[i] == '\n')
            res++;

    return res;
}

int contaPal(char s[]) {
    int pal = (s[0] != '\0'), p = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i]) && p) {
            p = 0;
            pal++;
        } else p = 1;
    }
    return pal;
}

int procura(char *p, char *ps[], int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(p, ps[i]) == 0)
            return 1;
    }
    return 0;
}


void initStack(STACK *s) {
    s -> sp = 0;
}

int isEmptyS(STACK *s) {
    return (s -> sp == 0);
}

int push(STACK *s, int x) {
    if (s -> sp < MAX) {
        s -> valores[s -> sp] = x;
        s -> sp++;
        return 0;
    }
    return 1;
}

int pop(STACK *s, int *x) {
    if (s -> sp > 0) {
        s -> sp--;
        *x = s -> valores[s -> sp];
        return 0;
    }
    return 1;
}

int top(STACK *s, int *x) {
    if (s -> sp > 0) {
        *x = s -> valores[--(s -> sp)];
        return 0;
    }
    return 1;
}