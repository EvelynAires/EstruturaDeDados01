#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

// Função para criar um novo nó
No* criarNo(int valor) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: não foi possível alocar memória para o nó.\n");
        exit(EXIT_FAILURE);
    }
    novo->info = valor;
    novo->prox = NULL;
    return novo;
}

// Função para criar uma nova lista vazia
Lista* criarLista() {
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    if (novaLista == NULL) {
        printf("Erro: não foi possível alocar memória para a lista.\n");
        exit(EXIT_FAILURE);
    }
    novaLista->inicio = NULL;
    return novaLista;
}

// Função para inserir um elemento no início da lista
void inserirInicio(Lista* l, int valor) {
    No* novo = criarNo(valor);
    novo->prox = l->inicio;
    l->inicio = novo;
}

// Função para retornar o número de nós da lista que possuem o campo info com valores maiores do que n
int maiores(Lista* l, int n) {
    int count = 0;
    No* atual = l->inicio;
    while (atual != NULL) {
        if (atual->info > n) {
            count++;
        }
        atual = atual->prox;
    }
    return count;
}

// Função para liberar a memória alocada para a lista
void liberarLista(Lista* l) {
    No* atual = l->inicio;
    while (atual != NULL) {
        No* temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(l);
}

