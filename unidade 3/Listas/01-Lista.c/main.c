#include <stdio.h>
#include "Lista.h"

int main() {
    Lista* lista = criarLista();

    // Exemplo de inserção de elementos na lista
    inserirInicio(lista, 10);
    inserirInicio(lista, 20);
    inserirInicio(lista, 30);
    inserirInicio(lista, 40);
    inserirInicio(lista, 50);

    int valorLimite = 25;
    int count = maiores(lista, valorLimite);
    printf("Número de nós com valor maior que %d: %d\n", valorLimite, count);

    liberarLista(lista); // Liberar memória alocada pela lista

    return 0;
}
