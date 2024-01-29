//Questão 2) Escreva um programa em C que manipula dados de um conjunto de alunos da disciplina de Estrutura de
//Dados e Programação da UFERSA Pau dos Ferros. Para representar um aluno são necessárias as seguintes
//informações: matrícula (inteiro), nome (80 caracteres), turma (caractere), três notas (reais em um vetor) e uma
//média (real). Seu programa deve levar em consideração que é ofertado um número máximo de vagas para a
//disciplina. Sabendo dessas informações, faça o que se pede nos itens a seguir:
//a) Implemente uma função que recebe os dados de um aluno e o matricula na disciplina, caso haja vaga
//disponível. Protótipo: void matricula(int n,Aluno** alunos);
//b) Implemente uma função que lança as notas e calcula a média dos alunos da disciplina. Protótipo: void
//lanca_notas(int n, Aluno** alunos);
//c) Implemente uma função que imprime os dados de todos os alunos da disciplina. Protótipo: void
//imprime_tudo(int n, Aluno** alunos);
//d) Implemente uma função que imprime os dados de todos os alunos de uma turma. Protótipo: void
//imprime_turma(int n, Aluno** alunos, char turma);
//e) Implemente uma função que imprime os alunos aprovados de uma determinada turma. Para ser
//aprovado, o aluno deve ter média maior que ou igual a 7,0. Protótipo: void imprime_turma_aprovados(int n,
//Aluno**alunos, char turma);
//Sugestões: i) Use um vetor de ponteiros para estrutura; ii) Use uma constante simbólica para representar o número
//máximo de alunos. Iii) Antes de manipular o vetor de ponteiros, inicialize cada um de seus elementos com NULL
//(você pode escrever uma função para isso).
//OBS.: Os exercícios apresentados sugerem a implementação de diferentes funções. Sendo assim, o programador
//deve escrever um programa (função main) para testar sua implementação.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    int matricula;
    char nome[80];
    char turma[25];
    float notas[3];
    float media;
} Aluno;

void matricula(int n, Aluno **alunos) {
    int a;
    for (a = 0; a < n; a++) {
        printf("MATRICULA DO ALUNO %d\n", a + 1);
        printf("Numero da matricula: ");
        scanf("%d", &alunos[a]->matricula);
        printf("Nome do aluno: ");
        scanf(" %[^\n]", alunos[a]->nome);
        printf("Digite a turma: ");
        scanf(" %[^\n]", alunos[a]->turma);
        printf("Matricula realizada com sucesso!\n");
    }
}

void lanca_notas(int n, Aluno **alunos) {
    int b;
    for (b = 0; b < n; b++) {
        printf("\nNOTA DO ALUNO: %d\n", b + 1);
        float media = 0;
        int c;
        for (c = 0; c < 3; c++) {
            printf("Preencha a nota %d do aluno %d: ", c + 1, b + 1);
            scanf("%f", &alunos[b]->notas[c]);
            media += alunos[b]->notas[c];
        }

        alunos[b]->media = media / 3;
    }
}

void imprime_tudo(int n, Aluno** alunos){
    int b;
    for(b=0; b<n; b++){
        printf("\n ==MATRICULA DO ALUNO== %d\n", b+1);
        printf("Matricula: %d\n", alunos[b]->matricula);
        printf("Nome: %s\n", alunos[b]->nome);
        printf("Turma: %s\n", alunos[b]->turma);
        int c;
        printf("\n ==NOTAS DO ALUNO== %d\n", b+1);
        for(c=0; c<3; c++){
            printf("Nota %d\n", c+1);
            printf("Nota: %.2f\n", alunos[b]->notas[c]);
        }
        printf("Media: %.2f\n", alunos[b]->media);
    }
}

void imprime_turma(int n, Aluno** alunos, char* turma){
    int b;
    printf("\n==ALUNOS DA TURMA %s== ", turma);
    for(b=0; b<n; b++){
        if (strcmp(alunos[b]->turma, turma) == 0) {
            printf("\n DADOS DO ALUNO %d\n", b+1);
            printf("Matricula: %d\n", alunos[b]->matricula);
            printf("Nome: %s\n", alunos[b]->nome);
            printf("Turma: %s\n", alunos[b]->turma);
            int c;
            printf("\n NOTAS DO ALUNO %d\n", b+1);
            for(c=0; c<3; c++){
                printf("\nNota %d", c+1);
                printf("\nNota: %.2f", alunos[b]->notas[c]);
            }
            printf("\nMedia: %.2f", alunos[b]->media);
        }
    }
}

void imprime_turma(int n, Aluno** alunos, char* turma){
    int b;
    printf("\n==ALUNOS DA TURMA %s== ", turma);
    for(b=0; b<n; b++){
        if (strcmp(alunos[b]->turma, turma) == 0) {
            printf("\n==DADOS DO ALUNO %d==\n", b+1);
            printf("Matricula: %d\n", alunos[b]->matricula);
            printf("Nome: %s\n", alunos[b]->nome);
            printf("Turma: %s\n", alunos[b]->turma);
            int c;
            printf("==NOTAS DO ALUNO %d==\n", b+1);
            for(c=0; c<3; c++){
                printf("\nNota %d", c+1);
                printf("\nNota: %.2f", alunos[b]->notas[c]);
            }
            printf("\nMedia: %.2f", alunos[b]->media);
        }
    }
}

int main() {
    int n = 3;
    char turma[25];

    Aluno **alunos = (Aluno **)malloc(n * sizeof(Aluno *));

    for (int b = 0; b < n; b++) {
        alunos[b] = (Aluno *)malloc(sizeof(Aluno));
    }

    matricula(n, alunos);
    lanca_notas(n, alunos);
    imprime_tudo(n, alunos);

    printf("\nDIGITE A TURMA QUE DESEJA: ");
    scanf("%19s", turma);

    imprime_turma(n, alunos, turma);
    imprime_turma_aprovados(n, alunos, turma);

    for (int b = 0; b < n; b++) {
        free(alunos[b]);
    }

    free(alunos);
    return 0;
}
