#include "pilha.h"
#include<stdlib.h>
#include<stdio.h>

#define N 50

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