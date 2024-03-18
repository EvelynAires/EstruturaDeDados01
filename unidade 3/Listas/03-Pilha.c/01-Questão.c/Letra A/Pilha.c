#include "pilha.h"
#include<stdlib.h>
#include<stdio.h>

struct pilha{
  int n;
  float* vet;
};

typedef struct pilha Pilha;

Pilha* pilha_cria (void){
    Pilha* stack = (Pilha*) malloc(sizeof(Pilha));
    if(stack == NULL){
        exit(1);
    }
    stack->vet = (float*) malloc(N*sizeof(float));
    if(stack->vet ==NULL){
        exit(1);
    }
    return stack;
}

void pilha_push(Pilha * stack, float v) {
    if (stack->tamanho == stack->capacidade) {
        printf("Capaciade da pilha estourou!\n");
        exit(1);
    }
    
}