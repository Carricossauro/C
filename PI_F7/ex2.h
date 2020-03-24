#ifndef PI_F7_EX2_H
#define PI_F7_EX2_H

typedef struct al {
    char Nome[60];
    int Numero;
    int Nota;
} Aluno;

typedef struct tur {
    Aluno aluno;
    struct tur *proximo;
} Turma;

int ex2();
int acrescentaAluno (Turma *t, Aluno a);
Aluno *procura (Turma *t, int numero);
int QuantosPassaram(Turma *t);

#endif //PI_F7_EX2_H
