//2.Implemente um programa em C para ler o nome e as notas de um numero N de alunos e armazena-los
//em um arquivo

#include<stdio.h>
#include<stdlib.h>

struct aluno {
    char nome[25];
    float nota1, nota2, nota3;
    float media;
}Aluno;

void adicionar() {
    struct aluno Aluno; 

    FILE *entrada = fopen("aluno.txt", "a");

    if (entrada == NULL) {
        printf("Erro ao abrir!\n");
        exit(1);
    }

    printf("==DADOS DO ALUNO==\n");
    printf("Nome do aluno: ");
    scanf(" %[^\n]s", Aluno.nome);
    printf("Primeira nota: ");
    scanf("%f", &Aluno.nota1);
    printf("Segunda nota: ");
    scanf("%f", &Aluno.nota2);
    printf("Terceira nota: ");
    scanf("%f", &Aluno.nota3);

    
    Aluno.media = (Aluno.nota1 + Aluno.nota2 + Aluno.nota3) / 3.0;

    fprintf(entrada, "%s\t%.1f\t%.1f\t%.1f\t%.1f\n", Aluno.nome, Aluno.nota1, Aluno.nota2, Aluno.nota3, Aluno.media);
    printf("Aluno adicionado!\n");
    fclose(entrada);
}

int main() {
    int quantidade;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        adicionar();
    }

    return 0;
}

