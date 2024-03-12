//Questão 2) Você foi contratado por uma instituição educacional para desenvolver um sistema
//de gerenciamento de alunos e disciplinas. Para isso, você precisa criar um conjunto de Tipos
//Abstratos de Dados (TADs) que permitam a manipulação eficiente dos dados dos alunos e das
//disciplinas oferecidas pela instituição.
#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Aluno* cria_aluno(char nome[], int matricula) {
    Aluno* aluno = (Aluno*)malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    aluno->num_disciplinas = 0;
    return aluno;
}

void matricula_disciplina(Aluno* aluno, Disciplina* disciplina) {
    for (int i = 0; i < aluno->num_disciplinas; i++) {
        if (aluno->disciplina[i]->codigo == disciplina->codigo) {
            printf("O aluno já está matriculado nesta disciplina.\n");
            return;
        }
    }

   
    if (aluno->num_disciplinas >= 8) {
        printf("O aluno atingiu o limite de matriculamento de disciplinas.\n");
        return;
    }

  
    aluno->disciplina[aluno->num_disciplinas] = disciplina;
    aluno->num_disciplinas++;
}

void exclui_aluno(Aluno* aluno) {
    free(aluno);
}
