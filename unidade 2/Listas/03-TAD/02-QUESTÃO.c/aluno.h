#ifndef ALUNO_H
#define ALUNO_H

#include "disciplina.h"

typedef struct Aluno {
    char nome[100];
    int matricula;
    Disciplina* disciplina[8];
    int num_disciplinas;
} Aluno;

Aluno* cria_aluno(char nome[], int matricula);
void matricula_disciplina(Aluno* aluno, Disciplina* disciplina);
void exclui_aluno(Aluno* aluno);

#endif
