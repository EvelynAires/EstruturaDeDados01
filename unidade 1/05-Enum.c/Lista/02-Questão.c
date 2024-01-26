#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum tipo {
    ALIMENTO,
    BEBIDA,
    ELETRONICO
} tipo;

typedef struct produto {
    char nome[30];
    float preco;
    tipo tipos;
} produto;

void divisoria() {
    printf("========================================\n");
}

void preencher(produto *pt) {
    char escolha;
    printf("Informe o nome do produto: \n");
    scanf(" %[^\n]", pt->nome);
    printf("Digite o preço: ");
    scanf("%f", &pt->preco);
    printf("Digite o tipo do produto:\n");
    printf("(0) para ALIMENTOS\n");
    printf("(1) para BEBIDAS\n");
    printf("(2) para ELETRONICO\n");
    scanf("%d", &pt->tipos);
}

void imprimir(produto *pt) {
    printf("Nome: %s\n", pt->nome);
    printf("Preco: %.2f\n", pt->preco);
    printf("Tipo: ");
    switch (pt->tipos) {
        case ALIMENTO:
            printf("Alimento\n");
            break;
        case BEBIDA:
            printf("Bebida\n");
            break;
        case ELETRONICO:
            printf("Eletrônico\n");
            break;
        default:
            printf("Deu erro\n");
    }
}

int main(void) {
    produto *pt = malloc(sizeof(produto));
    printf("Informe os dados: \n");
    divisoria();
    preencher(pt);
    printf("Dados informados:\n");
    divisoria();
    imprimir(pt);
    free(pt);
    return 0;
}