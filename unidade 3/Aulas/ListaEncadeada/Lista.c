#include "Lista.h"
#include <stdlib.h>

typedef struct lista{
    int informacao;
    Lista * prox_elemento;
}Lista;

//inicializando a lista atribuindo NULL
Lista* cria_lista(void) {
    return NULL;
}

Lista * insere_elemento(Lista * lista, int valor){
    //Aloca novo nó da lista encadeada
    Lista * novo_no = (Lista*) malloc(sizeof(Lista));
    if(novo_no==NULL){
        exit(1);
    }
    //Adiciona o valor do campo informacao
    novo_no->informacao = valor;
    //Conecta o novo nó a lista
    novo_no->prox_elemento = lista;
    return novo_no;
}

void lista_imprime(Lista * lista){
    Lista * contador;
    for(contador = lista; contador != NULL; contador = contador ->prox_elemento){
        printf("informacao = %d\n", contador->informacao);
    }
}

int lista_vazia(Lista * lista){
    if(lista == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

Lista* lista_busca (Lista* lista, int v);{

    lista_busca *p;
    for (p=lista_busca; p!=NULL; p=p->prox){
        if (p->informacao == v)
        return p;
        return NULL;
    }
}