//Aninhamento de estruturas
#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;
}Disciplina;

typedef struct aluno{
    char nome[20];
    int idade;
    int matricula;
   
    Disciplina * materias;
}Aluno;

int main(void){
    Aluno *aluno = (Aluno*) malloc(sizeof(Aluno)); 
    if(aluno == NULL){
        exit(1);
    }

    
    aluno -> materias = (Disciplina*) malloc(2*sizeof(Disciplina));
    if(aluno -> materias == NULL){
        exit(1);
    }

    printf("informe os dados do aluno: \n");
    scanf(" %[^\n]", aluno -> nome);
    scanf("%d %d", &aluno->idade, &aluno->matricula);

   
    int index;

    for(index = 0; index < 2; index++){
        printf("Cadastro de disciplinas %d : \n", index+1);
        printf("Informe o nome: \n");
        scanf(" %[^\n]", aluno->materias[index].nome);
        printf("Informe a nota: \n");
        scanf("%f", &aluno->materias[index].nota);
        printf("Informe o codigo: \n");
        scanf("%d", &aluno->materias[index].codigo);
    }
   
    for(index = 0; index < 2; index++){
        printf("Disciplina %d : \n", index+1);
        printf("Nome: %s\nNota: %f\nCodigo: %d\n", aluno->materias[index].nome, aluno->materias[index].nota,
        aluno->materias[index].codigo);
    }

    return 0;
}
