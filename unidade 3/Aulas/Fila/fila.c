#include"fila.h"
#include<stdio.h>
#include<stdlib.h>


struct _fila{
    int ini,fim;
    int qtde;
    int MAX_SIZE;
    int *val;
};

Fila *CriarFila(int MAX_SIZE){
    Fila *Q = (Fila*) calloc(1, sizeof(Fila));

    Q-> (int*) calloc(MAX_SIZE, sizeof(int));
    Q-> MAX_SIZE = MAX_SIZE;
    Q-> qtde = 0;
    Q-> ini = Q->fim = 0;

    return Q;
}