//--02--
#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[40];
    int documento;
    int idade;
}Pessoa;

void divisoria(){
    printf("====================================\n");
}

void preencher(Pessoa * pess){
    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]", pess->nome);
    printf("Informe o numero do documento: ");
    scanf("%d", &pess->documento);
    printf("Informe a idade da pessoa: ");
    scanf("%d", &pess->idade);
}


void imprimir (Pessoa * pess){
    printf("Nome: %s\n", pess->nome);
    printf("Documento: %d\n", pess->documento);
    printf("Idade: %d\n", pess->idade);
}

void NovaIdade(Pessoa * pess, int idade_n){
    pess->idade = idade_n;
}

void pessmaisvelha(Pessoa * pess, int quantidadePessoas){
    int contador;
    int m_idade = pess[0].idade;
    int idade = 0;
    for (contador = 0; contador < quantidadePessoas; contador++){
        if (pess[contador].idade > m_idade){
           m_idade = pess[contador].idade;
           idade = contador;
        }
    }
    printf("\n Pessoa mais velha eh %s tendo %d anos", pess[idade].nome, m_idade);
}

void pessmaisnova(Pessoa * pess, int quantidadePessoas){
    int contador;
    int me_idade = pess[0].idade;
    int idade = 0;
    for(contador = 0; contador < quantidadePessoas; contador++){
        if (pess[contador].idade < me_idade){
            me_idade = pess[contador].idade;
            idade = contador;
        }
    }
    printf("\n Pessoa mais nova eh %s tendo %d anos\n", pess[idade].nome, me_idade);
}

int main(){
    
    int quantidadePessoas = 4;

    Pessoa * pess = (Pessoa*)malloc(quantidadePessoas * sizeof(Pessoa));

    int contador; 

    printf("DADOS DAS PESSOAS:\n");
    divisoria();
    for (contador = 0; contador < quantidadePessoas; contador++){
        preencher(&pess[contador]);
        divisoria();
    }

    printf("DADOS INFORMADOS:\n");
    divisoria();
    for (contador = 0; contador < quantidadePessoas; contador++){
        imprimir(&pess[contador]);
        divisoria();
    }

    pessmaisvelha(pess, quantidadePessoas);
    pessmaisnova(pess, quantidadePessoas);
    divisoria();

    free(pess);
    return 0;
}