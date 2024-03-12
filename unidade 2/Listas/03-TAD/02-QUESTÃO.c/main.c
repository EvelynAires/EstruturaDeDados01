#include <stdio.h>
#include "aluno.h"
#include "disciplina.h"

int main() {
   
    Disciplina* biologia = cria_disciplina("Biologia", 101);
    Disciplina* portugues = cria_disciplina("Portugues", 102);

   
    Aluno* aluno1 = cria_aluno("Pedro", 1001);
    Aluno* aluno2 = cria_aluno("Alana", 1002);

    
    matricula_disciplina(aluno1, biologia);
    matricula_disciplina(aluno1, biologia );
    matricula_disciplina(aluno2, portugues);

    
    printf("Aluno 1:\n");
    printf("Nome: %s\n", aluno1->nome);
    printf("Matricula: %d\n", aluno1->matricula);
    printf("Disciplinas:\n");
    for (int i = 0; i < aluno1->num_disciplinas; i++) {
        printf("- %s\n", aluno1->disciplina[i]->nome);
    }
    printf("\n");

    printf("Aluno 2:\n");
    printf("Nome: %s\n", aluno2->nome);
    printf("Matricula: %d\n", aluno2->matricula);
    printf("Disciplinas:\n");
    for (int i = 0; i < aluno2->num_disciplinas; i++) {
        printf("- %s\n", aluno2->disciplina[i]->nome);
    }

   
    exclui_disciplina(biologia);
    exclui_disciplina(portugues);
    exclui_aluno(aluno1);
    exclui_aluno(aluno2);

    return 0;
}
