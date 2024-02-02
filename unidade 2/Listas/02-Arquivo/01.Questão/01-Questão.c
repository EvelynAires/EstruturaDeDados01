//1. Faca um programa em C que solicita ao usuario informacoes de funcionarios via teclado.
// As informacoes digitadas pelo o usuario sao: id, nome e salaario do funcionario. Armazene as informacoes
//digitadas pelo usuario em um arquivo texto.

#include<stdio.h>
#include<stdlib.h>

typedef struct funcionarios{
    int id;
    char nome[25];
    float salario;
}Func;

void preencher(){
    FILE * entrada = fopen("Func.txt", "w");

    if(entrada == NULL){
        printf("Erro ao abrir!\n");
        exit(1);
    }


Func funcionarios;
printf("==Dados do Funcionario==\n");
printf("Informe o id:");
scanf("%d", &funcionarios.id);
printf("Digite o nome: ");
scanf(" %[^\n]", funcionarios.nome);
printf("Informe o salario: ");
scanf("%f", &funcionarios.salario);

fprintf(entrada, "==DADOS DO FUNCIONARIO==\n");
fprintf(entrada, "Id: %d\n", funcionarios.id);
fprintf(entrada, "Nome: %s\n", funcionarios.nome);
fprintf(entrada, "Salario: %.2f\n", funcionarios.salario);

fclose(entrada);
}

int main(){
    preencher();
    return 0;
}