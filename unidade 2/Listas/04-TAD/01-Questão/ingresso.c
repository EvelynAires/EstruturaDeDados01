#include "ingresso.h"
#include <stdio.h>

void preenche(Ingresso* i) {
    printf("Informe o preco do ingresso: ");
    scanf("%f", &i->preco);

    printf("Diga o local que ira ocorrer o evento: ");
    scanf("%s", i->local);

    printf("Digite a atracao do evento: ");
    scanf("%s", i->atracao);
}

void imprime(Ingresso* i) {
    printf("Preço: %.2f\n", i->preco);
    printf("Local: %s\n", i->local);
    printf("Atracao: %s\n", i->atracao);
}

void altera_preco(Ingresso* i, float valor) {
    i->preco = valor;
}

void imprime_menor_maior_preco(int n, Ingresso* vet) {
    int menor_indice = 0;
    int maior_indice = 0;

    for (int i = 1; i < n; i++) {
        if (vet[i].preco < vet[menor_indice].preco) {
            menor_indice = i;
        }
        if (vet[i].preco > vet[maior_indice].preco) {
            maior_indice = i;
        }
    }

    printf("Evento do ingresso mais barato:\n");
    imprime(&vet[menor_indice]);
    printf("\nEvento do ingresso mais caro:\n");
    imprime(&vet[maior_indice]);
}