//Escreva um programa que implementa uma struct Produto com os campos nome, pre¸co e tipo. O
//tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
//ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union {
    char ALIMENTO[15];
    char BEBIDA[15];
    char ELETRONICO[15];
}tipo;

typedef struct {
    char nome[25];
    float preco;
    tipo tipos;
} produto;

void divisoria(){
    printf("\n==========================================\n");
}

void preencher(produto *pt) {
    int escolha;
    printf("Informe o nome do produto: \n");
    scanf(" %[^\n]", pt->nome);
    printf("Informe o preço do produto: \n");
    scanf("%f", &pt->preco);
    printf("Qual o tipo do produto? \n");
    printf("(1) para ALIMENTOS\n");
    printf("(2) para BEBIDAS\n");
    printf("(3) para ELETRONICO\n");
    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
        strcpy(pt->tipos.ALIMENTO, "ALIMENTOS");
        break;
    case 2:
        strcpy(pt->tipos.BEBIDA, "BEBIDAS");
        break;
     case 3:
        strcpy(pt->tipos.ELETRONICO, "ELETRONICO");
        break;
    default:
        exit(1);
        break;
    }
}

void imprimir(produto *pt){
     printf("Nome: %s\n", pt->nome);
    printf("Preço: %.2f\n", pt->preco);
    printf("Tipo: %s\n", pt->tipos.ALIMENTO);

}

int main (void){
    produto * pt = malloc(sizeof(produto));
    printf("Informe os dados: \n");
    divisoria();
    preencher(pt);
    printf("Dados informados:\n");
    divisoria();
    imprimir(pt);
    free(pt);
    return 0;
}