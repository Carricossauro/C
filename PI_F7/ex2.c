#include "ex2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex2() {
    Turma *turma = malloc(sizeof(Turma));
    turma->proximo = NULL;

    turma->aluno.Numero = 1;
    strcpy(turma->aluno.Nome, "Joao Dias");
    turma->aluno.Nota = 15;
    Aluno aluno;
    strcpy(aluno.Nome, "Tiago Carrico");
    aluno.Numero = 2;
    aluno.Nota = 20;
    Aluno *a = procura(turma, 2);
    acrescentaAluno(turma, aluno);
    a = procura(turma, 2);

    int n = QuantosPassaram(turma);
    return 0;
}

int acrescentaAluno (Turma *t, Aluno a) {
    while (t->proximo != NULL)
        t = t->proximo;

    Turma *turma = malloc(sizeof(Turma));
    t->proximo = turma;
    strcpy(turma->aluno.Nome,a.Nome);
    turma->aluno.Numero = a.Numero;
    turma->aluno.Nota = a.Nota;
    turma->proximo = NULL;
    return 0;
}

Aluno *procura (Turma *t, int numero) {
    Aluno *a = NULL;
    while (t->proximo != NULL && numero != t->aluno.Numero) {
        t = t->proximo;
    }
    if (numero == t->aluno.Numero)
        a = &t->aluno;
    return a;
}

int QuantosPassaram(Turma *t) {
    int x = 0;

    while (t != NULL) {
        if (t->aluno.Nota >= 10)
            x++;
        t = t->proximo;
    }

    return x;
}