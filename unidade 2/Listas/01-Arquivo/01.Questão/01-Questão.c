//Questão 1) Escreva um programa em C que leia de um arquivo as notas dos alunos de uma
//turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação
//(aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída,
//considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a
//execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo
//de saída “saída_q3.txt”, como ilustrado a seguir.

#include<stdio.h>
#include<stdlib.h>

typedef struct alunos {
    char nome[50];
    float nota1, nota2, nota3;
    float media;
} Alunos;


void adicionar(){
    Alunos alunos;

    FILE * entrada = fopen("entrada_q3.txt", "a");

    if (entrada == NULL){ 
        printf("Erro ao abrir!\n");
        exit(1);
    }

    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]s", alunos.nome);
    printf("Primeira nota: ");
    scanf("%f", &alunos.nota1);
    printf("Segunda nota: ");
    scanf("%f", &alunos.nota2);
    printf("Terceira nota: ");
    scanf("%f", &alunos.nota3);
    
    fprintf(entrada, "%s\t%.1f\t%.1f\t%.1f\n", alunos.nome, alunos.nota1, alunos.nota2, alunos.nota3);
    printf("Dados do aluno adicionado!\n");
    fclose(entrada);

}

void medias(FILE * entrada){
    
    Alunos alunos;
    FILE * saida = fopen("saida_q3.txt", "w");

    if (entrada == NULL){
        printf("Erro ao abrir!\n");
        exit(1);
    }
    
    while(fscanf(entrada, "%20[^\t]\t%f\t%f\t%f\n", alunos.nome, &alunos.nota1, &alunos.nota2, &alunos.nota3) != EOF){
        
        alunos.media = (alunos.nota1 + alunos.nota2 + alunos.nota3)/3;
        
        if(alunos.media >= 7){
            fprintf(saida, "%s\t%.1f\taprovado\n", alunos.nome, alunos.media);
        }
        else{
            fprintf(saida, "%s\t%.1f\treprovado\n", alunos.nome, alunos.media);
        }
    }

    printf("Media calculada!\n");
    fclose(saida);
}

int main(void){
    FILE * entrada;
    int opcao;

    entrada = fopen("entrada_q3.txt", "a+");

    if (entrada == NULL){
        printf("Erro ao abrir!\n");
        exit(1);
    }

    do{
        
        printf("\tMENU DA TURMA\n");

        printf("1 - Adicionar dados do aluno\n");
        printf("2 - Calcular media do aluno\n");
        printf("3 - Sair\n");
        printf("Informe a opcao que deseja:");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                adicionar();
                break;
            case 2:
                medias(entrada);
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao nao disponivel!\n");
                break;
        }
    }while(opcao != 3);

    fclose(entrada);

    return 0;
}