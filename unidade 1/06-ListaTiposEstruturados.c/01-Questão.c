//Questão 1) Crie um tipo estruturado para armazenar dados de um ingresso. Uma estrutura deste tipo possui os
//seguintes campos: preço, local e atração.
//a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e
//preencha seus campos com valores fornecidos pelo usuário via teclado. Protótipo: void
//preenche(Ingresso* i);
//b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e imprima
//os valores dos seus campos. Protótipo: void imprime(Ingresso* i);
//c) Escreva uma função que receba, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um
//novo valor de preço e atualize o preço do ingresso para o novo valor. Protótipo: void
//altera_preco(Ingresso* i, float valor);
//d) Escreva uma função que receba, como parâmetros, um vetor de ingressos e o tamanho do vetor e
//imprima os eventos de ingresso mais barato e mais caro. Protótipo: void imprime_menor_maior_preco(int
//n, Ingresso* vet);
//e) Escreva uma função main para testar as funções anteriores

#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso{
    float preco;
    char local[30];
    char atracao[30];
}Ingresso;

//a) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e
//preencha seus campos com valores fornecidos pelo usuário via teclado. Protótipo: void
//preenche(Ingresso* i);
void preenche(Ingresso * i){
    printf("==Informe os dados do ingresso:==\n");
    printf("Preco: ");
    scanf("%f", &i->preco);
    printf("Local: ");
    scanf(" %[^\n]", i->local);
    printf("Atração: ");
    scanf(" %[^\n]", i->atracao);
}

//b) Escreva uma função que receba como parâmetro o endereço de uma estrutura do tipo Ingresso e imprima
//os valores dos seus campos. Protótipo: void imprime(Ingresso* i);
void imprime(Ingresso * i, int a){
    printf("Dados do ingresso: %d\n", a+1);
    printf("Preço: %.2f\n", i->preco);
    printf("Local: %s\n", i->local);
    printf("Atração: %s\n", i->atracao);
}

//c) Escreva uma função que receba, como parâmetros, o endereço de uma estrutura do tipo Ingresso e um
//novo valor de preço e atualize o preço do ingresso para o novo valor. Protótipo: void
//altera_preco(Ingresso* i, float valor);
void altera_preco (Ingresso *i, float valor){
    i->preco = valor;
    printf("O preco agora é: %.2f \n", i->preco);
}

//d) Escreva uma função que receba, como parâmetros, um vetor de ingressos e o tamanho do vetor e
//imprima os eventos de ingresso mais barato e mais caro. Protótipo: void imprime_menor_maior_preco(int
//n, Ingresso* vet);
void imprime_menor_maior_preco(int n, Ingresso * vet){
    int cont;
    float maior = 0;
    float menor = vet[0].preco;

    for (cont = 0; cont < n; cont++){
        if (vet[cont].preco > maior){
            maior = vet[cont].preco;
        }
        if (vet[cont].preco < menor){
            menor = vet[cont].preco;
        }
    }
    printf("\nO menor valor: %.2f \n O maior valor: %.2f\n", menor, maior );
}

//e) Escreva uma função main para testar as funções anteriores
int main(){
    Ingresso ingresso;
    
    int quantidade;
    int cont;
    int op;
    float valor;

    printf("Quantos ingressos vão ser cadastrados?");
    scanf("%d", &quantidade);

    Ingresso vetor_i[quantidade];

     for (cont = 0; cont < quantidade; cont++){
        preenche(&ingresso);
        vetor_i[cont] = ingresso; 
    }

    for (cont = 0; cont < quantidade; cont++){
        imprime(&vetor_i[cont], cont);
    }
    
    imprime_menor_maior_preco(quantidade, vetor_i);

    printf("Deseja alterar o preco de algum ingresso? \n 1-sim \n 2-não \n");
    scanf("%d", &op);
    
    switch (op){
    case 1:
        printf("Digite o numero do ingresso a ser alterado: \n");
        scanf("%d", &op);

        if (op > quantidade|| op< 0){
            printf("ERRO! Ingresso não encontrado!");
            return 0;
        }

        printf("Digite o novo valor: \t");
        scanf("%f", &valor);

        altera_preco(&vetor_i[op-1], valor);
        break;
    case 2: 
        printf("Encerrando o programa..");
        break;
    default:
        printf("Opçao inválida!");
        break;
    }

    for (cont = 0; cont < quantidade; cont++){
        imprime(&vetor_i[cont], cont);
    }
    
    imprime_menor_maior_preco(quantidade, vetor_i);

    return 0;
}