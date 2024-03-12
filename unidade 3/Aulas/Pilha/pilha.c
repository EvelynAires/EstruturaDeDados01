#include "pilha.h"
#include<stdlib.h>
#include<stdio.h>

#define N 50

struct pilha{
  int n;
  float vet[N];
};

Pilha* pilha_cria (void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void pilha_push (Pilha* p, float v){
    if (p->n == N) {
        printf("Capacidade da pilha estourou!\n");
        exit(1);
    }

    p->vet[p->n] = v;
    p->n++;
}

int pilha_vazia(Pilha* p){
    return (p->n == 0);
}


float pilha_pop (Pilha* p){
    float v;
    if (pilha_vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }

    v = p->vet[p->n--1];
    p->n-- ;
    return v;
}

void pilha_libera (Pilha* p){
    free(p);
}

void pilha_imprime (Pilha* p){
    int index;
    for(index= p-> n-1; index >= 0; index--)
}