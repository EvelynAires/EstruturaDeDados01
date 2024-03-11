//Questão 1) Crie um TAD chamado ContaBancaria que possui os seguintes campos: titular,
//número e saldo. Como operações, considere as seguintes:
//-Cria conta: aloca dinamicamente uma estrutura do tipo ContaBancaria e retorna seu
//endereço. Os campos titular, número e saldo devem ser fornecidos como parâmetros;
//-Deposita: recebe, como parâmetros, o endereço de uma estrutura do tipo
//ContaBancaria e um valor, atualizando o saldo;
//-Saca: recebe, como parâmetros, o endereço de uma estrutura do tipo ContaBancaria e
//um valor, atualizando o saldo. Verificar se o saldo é suficiente para realizar o saque;
//-Transfere: recebe, como parâmetros, os endereços das estruturas do tipo
//ContaBancaria e um valor, atualizando os saldos. Verificar se o saldo é suficiente para
//realizar a transferência;
//-Saldo: recebe o endereço de uma estrutura do tipo ContaBancaria e retorna seu saldo;
//-Exclui conta: libera o espaço alocado dinamicamente para a estrutura.
//Faça o que se pede nos itens a seguir:
//a) Crie um arquivo (contabancaria.h) com a interface do TAD.
//b) Crie um arquivo (contabancaria.c) com a implementação do TAD.
//c) Crie um programa que utiliza o TAD ContaBancaria. 

#include "contabancaria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ContaBancaria *cria_conta(const char *titular, int numero, float saldo) {
    struct ContaBancaria *nova_conta = (struct ContaBancaria *)malloc(sizeof(struct ContaBancaria));
    if (nova_conta != NULL) {
        strcpy(nova_conta->titular, titular);
        nova_conta->numero = numero;
        nova_conta->saldo = saldo;
    }
    return nova_conta;
}

void deposita(struct ContaBancaria *conta, float valor) {
    conta->saldo += valor;
}

int saca(struct ContaBancaria *conta, float valor) {
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        return 1;
    } else {
        return 0; 
    }
}

int transfere(struct ContaBancaria *origem, struct ContaBancaria *destino, float valor) {
    if (saca(origem, valor)) { 
        deposita(destino, valor); 
        return 1;
    } else {
        return 0;
    }
}

float saldo(struct ContaBancaria *conta) {
    return conta->saldo;
}

void exclui_conta(struct ContaBancaria *conta) {
    free(conta);
}
