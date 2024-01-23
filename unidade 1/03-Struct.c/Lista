//EXERCICIO:STRUCT

//--01--
#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {
   char nome[50];
   float salario;
   int identificador;
   char cargo[20];
}Funcionario;

void divisoria(){
    printf("===========================================\n");
}

void preencha(Funcionario * funcio){
    printf("Digite o nome: ");
    scanf(" %[^\n]", funcio->nome); 
    printf("Informe o salario: ");
    scanf("%f", &funcio->salario);
    printf("Digite o identificador: ");
    scanf("%d", &funcio->identificador);
    printf("Digite o cargo que ocupa: ");
    scanf(" %[^\n]", funcio->cargo);

}

void imprima(Funcionario * funcio, int quantidade_func){
    printf("Nome: %s\n", funcio->nome);
    printf("Salario: %.2f\n", funcio->salario);
    printf("Identificador: %d\n", funcio->identificador);
    printf("Cargo: %s\n", funcio->cargo);
}

void altera_salario(Funcionario * funcio, float novo_salario){
    funcio->salario = novo_salario;
}

void maiorSalario(Funcionario * funcio, int quantidade_func){
    int contador;
    float maiorsalario = funcio[0].salario;
    int id;
    for (contador = 0; contador < quantidade_func; contador++){
        if (funcio[contador].salario > maiorsalario){
            maiorsalario = funcio[contador].salario;
            id = contador;
        }
    }
    printf("\nO maior salario eh de %.2f do funcionario com cargo %s\n", maiorsalario, funcio[id].cargo);
}

void menorSalario(Funcionario * funcio, int quantidade_func){
    int contador;
    float menorsalario = funcio[0].salario;
    int id;
    for (contador = 0; contador < quantidade_func; contador++){
        if (funcio[contador].salario < menorsalario){
            menorsalario = funcio[contador].salario;
            id = contador;
        }
    }
    printf("O menor salario eh de %.2f do funcionario com cargo %s\n", menorsalario, funcio[id].cargo);
}


int main(){
   int quantidade_func = 4;

   Funcionario * funcio = (Funcionario*)malloc(quantidade_func * sizeof(Funcionario));

    int contador;

    printf("INFORME OS DADOS:\n");
    divisoria();
    for (contador = 0; contador < quantidade_func; contador++){
        preencha(&funcio[contador]);
        divisoria();
    }

    printf("DADOS DOS FUNCIONARIOS:\n");
    divisoria();
    for (contador = 0; contador < quantidade_func; contador++){
        imprima(&funcio[contador], quantidade_func);
        divisoria();
    }

    maiorSalario(funcio, quantidade_func);
    menorSalario(funcio, quantidade_func);
    divisoria();

    free(funcio);
    return 0;

}

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
    printf("\n Pessoa mais velha eh %s tendo %d anos", pess[id].nome, m_idade);
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
    printf("\n Pessoa mais nova eh %s tendo %d anos\n", pess[id].nome, me_idade);
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

