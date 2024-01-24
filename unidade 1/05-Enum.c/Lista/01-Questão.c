#include<stdio.h>

typedef enum genero{
    Masculino,
    Feminino
}Genero;

typedef struct pessoa{
    char nome[30];
    int idade;
    Genero genero_pessoa;
}Pessoa;

void get_dados(Pessoa *pessoa){
    printf("Informe o nome: \n");
    scanf("%[^\n]", pessoa->nome);
    printf("Informe a idade: \n");
    scanf("%d", &pessoa->idade);
    printf("Informe o gênero: \n 0-Masculino \n 1-Feminino");
    scanf("%d", (int *)&pessoa->genero_pessoa);
}

void imprime_pessoa(Pessoa *pessoa){
    printf("Nome: %s\n Idade: %d \n Genero: %s", pessoa->nome, pessoa->idade, pessoa->genero_pessoa==Masculino?"Masculino": "Feminino");
}

int main(){
    Pessoa *pessoa;
    get_dados(pessoa);
    imprime_pessoa(pessoa);
    return 0;
}