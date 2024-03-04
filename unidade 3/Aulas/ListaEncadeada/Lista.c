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