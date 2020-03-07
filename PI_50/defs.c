#include "defs.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ex1() {
    int n, maior;
    printf("Sequência:\n");
    scanf("%d", &maior);
    while (n != 0) {
        scanf("%d", &n);
        if (n > maior) {
            maior = n;
        }
    }
    return maior;
}

int ex2() {
    float n, soma = 0, i = 0, media;
    printf("Sequência:\n");
    //Recebe a sequência
    while (n != 0) {
        scanf("%f",&n);
        if (n == 0) break;
        soma += n;
        i++;
    }

    //Calcula a média
    media = soma/(i);
    return media;
}

int ex3() {
    int n, maior, segundo;
    printf("Sequência:\n");
    scanf("%d", &maior);
    scanf("%d", &n);
    if (n <= maior) segundo = n;
    else {
        segundo = maior;
        maior = n;
    }
    while (n != 0) {
        scanf("%d", &n);
        if (n == 0) break;
        else if (n >= maior) maior = n;
        else if (n > segundo) segundo = n;
    }
    return segundo;
}

int ex4(unsigned int a) {
    int uns = 0;
    while ((a / 2) != 0) {
        if (a % 2 == 1) uns++;
        a /= 2;
    }
    if (a % 2 == 1) uns++;
    return uns;
}

int ex5(unsigned int a) {
    int zs = 0;
    while ((a / 2) != 0) {
        if (a % 2 == 0) zs++;
        a /= 2;
    }
    if (a % 2 == 0) zs++;
    return zs;
}

int ex6(unsigned int a) {
    int x = 0;
    for (int i = 1; 1; i *= 10) {
        if (a / i == 0) break;
        else x++;
    }
    return x;
}

char *ex7(char s1[], char s2[]) {
    int size, size2;
    size = strlen(s1);
    size2 = strlen(s2);
    for (int i = 0; i < size2; i++) {
        s1[size + i] = s2[i];
    }
    return s1;
}

char *ex8(char *dest, char *source) {
    int i;
    for (i = 0; source[i] != '\0'; i++)
        dest[i] = source[i];
    dest[i] = '\0';
    return dest;
}

int ex9(char s1[], char s2[]) {
    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    return (s1[i] - s2[i]);
}

char *ex10(char s1[], char s2[]) {
    char *p = NULL, p1, p2 = 0, n = strlen(s1) - 1, pSave = 0;

    for (p1 = 0; p1 < n; p1++) {
        if (s1[p1] == s2[p2]) {
            pSave = p1;
            while (1) {
                if (s2[p2] == '\0') {
                    p = s1 + pSave;
                    break;
                }
                if (s1[p1++] != s2[p2++]) break;
            }
            if (p != NULL) break;
        }
    }
    
    return p;
}

void ex11(char s[]) {
    int tam = strlen(s), pos = 0, i;
    char *arr = malloc(tam * sizeof(char));

    for (i = tam - 1; i >= 0; i--) arr[pos++] = s[i];
    for (i = 0; i < tam; i++) s[i] = arr[i];
}

void ex12(char s[]) {
    int pos = 0, n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'
         && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
            s[pos++] = s[i];
    }
    s[pos] = '\0';
}

void ex13(char t[], int n) {
    int i, pos = 0, tLen = strlen(t), p = 0, pl = 1;

    for (i = 0; i < tLen; i++) {
        if (t[i] == ' ') {
            t[pos++] = ' ';
            p = 0;
            pl = 1;
        } else if (pl) {
            if (++p <= n && n != 0) t[pos++] = t[i];
            else {
                p = 0;
                pl = 0;
            }
        }
    }
    t[pos] = '\0';
}

char ex14(char s[]) {
    int n = strlen(s), vs = 0, vLetra = 0, i, o;
    char letra, l;
    if (!n) letra = 0;
    else {
        for (i = 0; i < n; i++) {
            vs = 0;
            l = s[i];
            for (o = 0; o < n; o++) {
                if (s[i] == s[o]) vs++;
            }
            if (vs > vLetra) {
                letra = l;
                vLetra = vs;
            }
        }
    }
    return letra;
}

int ex15(char s[]) {
    int n = strlen(s), vs = 0, r = 0, i, o;
    for (i = 0; i < n; i++) {
        vs = 0;
        for (o = i; o < n; o++) {
            if (s[i] == s[o]) vs++;
            else break;
        }
        if (vs > r) r = vs;
    }
    return r;
}

int ex16(char s[]) {
    int n = strlen(s), vs = 0, r = 0, i, o;
    for (i = 0; i < n; i++) {
        vs = 0;
        for (o = i; o < n; o++) {
            if (o == 0) vs++;
            else if (s[o] == ' ') continue;
            else if (s[o - 1] == s[o]) break;
            else vs++;
        }
        if (vs > r) r = vs;
    }
    return r;
}

int ex17(char s1[], char s2[]) {
    int n1 = strlen(s1), n2 = strlen(s2);
    int n = (n1 < n2 ? n1 : n2), r = 0;

    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i]) r++;
        else break;
    }
    return r;
}

int ex18(char s1[], char s2[]) {
    int n1 = strlen(s1), n2 = strlen(s2);
    int n = (n1 < n2 ? n1 : n2), r = 0, pos = 0;
    char s1i[n1], s2i[n2];

    for (int i = n1 - 1; i >= 0; i--) s1i[pos++] = s1[i];
    pos = 0;
    for (int i = n2 - 1; i >= 0; i--) s2i[pos++] = s2[i];

    for (int i = 0; i < n; i++) {
        if (s1i[i] == s2i[i]) r++;
        else break;
    }
    return r;
}

int ex19(char s1[], char s2[]) {
    int n1 = strlen(s1), n2 = strlen(s2);
    int n = (n1 < n2 ? n1 : n2), r = 0, pos = 0, re = 0, i, o;
    char s1i[n1];

    for (i = 0; i < n1; i++) {
        if (s1[i] == s2[0]) {
            pos = i;
            for (o = 0; s1[pos] != '\0'; o++) {
                if (s1[pos++] == s2[o]) r++;
                else {
                    r = 0;
                    break;
                }
            }
        }
        if (r != 0) break;
    }
    return r;
}

int ex20(char s[]) {
    int n = strlen(s), pal = 0, o, i;

    for (i = 0; i < n; i++) {
        if (isspace(s[i])) continue;
        else {
            for (o = i; o < n; o++)
                if (isspace(s[o])) break;
            i = o;
            pal++;
        }
    }

    return pal;
}

int ex21(char s[]) {
    int n = strlen(s), v = 0;
    char vm[] = {'a', 'e','i','o','u'}, vM[] = {'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < n; i++) {
        for (int o = 0; o < 5; o++)
            if (vm[o] == s[i] || vM[o] == s[i]) {
                v++;
                break;
            }
    }
    return v;
}

int ex22(char a[], char b[]) {
    int n = strlen(a), nb = strlen(b), v = 1, i, o = 0;

    if (nb > 0) {
        for (i = 0; i < n; i++) {
            for (o = 0; o < nb && a[i] != b[o]; o++)
                if (o >= nb - 1) v = 0;
        }
    } else v = 0;
    
    return v;
}

int ex23(char s[]) {
    int n = strlen(s), r = 1, pos = 0, par = (n % 2 == 0);
        for (int i = n - 1; par ? (i >= n/2) : (i > n/2); i--, pos++)
            if (s[i] != s[pos]) {
                r = 0;
                break;
            }
    return r;
}

int ex24(char s[]) {
    int n = strlen(s), pos = 0, i;
    char ant;

    if (n > 0) {
        ant = s[pos++];
        for (i = 1; i < n; i++) {
            if (s[i] != ant) {
                ant = s[i];
                s[pos++] = ant;
            }
        }
        s[pos] = '\0';
    }

    return pos;
}

int ex25(char s[]) {
    int n = strlen(s), pos = 0, esp = 0, i;
    for (i = 0; i < n; i++) {
        if (isspace(s[i])) {
            if (esp == 0) {
                s[pos++] = s[i];
                esp = 1;
            }
        } else {
            s[pos++] = s[i];
            esp = 0;
        }
    }

    s[pos] = '\0';
    return pos;
}

void ex26(int v[], int n, int x) {
    int i, v2[n];
    for (i = 0; i < n; i++) v2[i] = v[i];
    for (i = 0; x > v[i]; i++);
    v[i++] = x;
    for (; i <= n; i++) v[i] = v2[i - 1];
}

void ex27(int v[], int a[], int b[], int na, int nb) {
    int n = na + nb, pa = 0, pb = 0;

    for (int i = 0; i < n; i++) {
        if (pa == na) v[i] = b[pb++];
        else if (pb == nb) v[i] = a[pa++];
        else if (a[pa] <= b[pb])
            v[i] = a[pa++];
        else v[i] = b[pb++];
    }
}

int ex28(int a[], int i, int j) {
    int anterior = a[i], cres = 1;

    for(int k = i + 1; k <= j; k++) {
        if (a[k] < anterior) cres = 0;
        else anterior = a[k];
    }
    return cres;
}

int ex29(int v[], int n) {
    int pos = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] >= 0) v[pos++] = v[i];
    }
    return pos;
}

int ex30(int v[], int n) {
    int vs = n+1, s = 0, num = -1, i, k;

    for (i = 0; i < n; i++) {
        for (k = i; k < n; k++) {
            if (v[k] == v[i]) s++;
            else if (s < vs) {
                vs = s;
                num = v[i];
                break;
            } else break;
        }
        if (k == n && s < vs) {
            vs = s;
            num = v[i];
        }
        i = k - 1;
        s = 0;
    }
    return num;
}

int ex31(int v[], int n) {
    int vs = 0, s = 0, num = -1, i, k;

    for (i = 0; i < n; i++) {
        for (k = i; k < n; k++) {
            if (v[k] == v[i]) s++;
            else if (s > vs) {
                vs = s;
                num = v[i];
                break;
            } else break;
        }
        if (k == n && s > vs) {
            vs = s;
            num = v[i];
        }
        i = k - 1;
        s = 0;
    }
    return num;
}

int ex32(int v[], int n) {
    int vs = 0, s = 1, anterior;

    for(int i = 0; i < n; i++) {
        if (v[i] < anterior) {
            s = 1;
        } else s++;

        if (vs < s) vs = s;
        anterior = v[i];
    }
    return vs;
}

int ex33(int v[], int n) {
    int pos = 0, rep = 0;

    for (int i = 0; i < n; i++) {
        rep = 0;

        for (int k = 0; k < pos; k++) {
            if (v[k] == v[i]) rep = 1;
        }

        if (!rep)
            v[pos++] = v[i];
    }
    return pos;
}

int ex34(int v[], int n) {
    int pos = 0;

    for (int i = 0; i < n; i++) {
        v[pos++] = v[i];
        for (int k = i + 1; k < n && v[k] == v[i]; k++)
        i = k;
    }

    return pos;
}