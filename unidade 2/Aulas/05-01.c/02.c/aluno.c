#include "aluno.h"
#include<stdlib.h>
#include<stdio.h>
struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno*) malloc(sizeof(Aluno));
    if(estudante==NULL){
        printf("SEM MEMORIA!");
        exit(1);
    }

    printf("Informe o nome do aluno:\n");
    scanf("%[^\n]", estudante->nome);
    printf("Informe a matricula:\n");
    scanf("%d", &estudante->matricula);
    printf("Informe o IRA:\n");
    scanf("%F", &estudante->IRA);

    return estudante;
}
