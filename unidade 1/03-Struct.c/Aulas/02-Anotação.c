#include<stdio.h>

typedef struct pessoa{
    char nome[20];
    int idade;
}pessoa;

void dados_pessoa(pessoa * p){

    printf("Informe o nome: \t");
    scanf("%[^\n]", p->nome);
    printf("\nInforme a idade: \t" );
    scanf("%d", &p->idade);
}

int main(void){
    pessoa pessoa;
    dados_pessoa(&pessoa);

    return 0;
}
