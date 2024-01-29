//Questão 3) Defina estruturas para representar retângulos (dadas a base e a altura) e círculos (dado o raio), e
//implemente as funções a seguir:
//a) Dado um círculo, crie e retorne o maior retângulo circunscrito de altura h. Considere que h é menor do
//que o diâmetro do círculo.
//Protótipo: Ret* ret_circunscrito(Circ* c, float h);
//b) Dado um retângulo, crie e retorne o maior círculo interno ao retângulo.
//Protótipo: Circ* circ_interno(Ret* r);

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ret {
    float base;
    float altura;
} Ret;

typedef struct circ {
    float raio;
} Circ;

Ret* ret_circunscrito(Circ* circ, float h) {
    Ret* ret = (Ret*)malloc(sizeof(Ret));

    float lado = sqrt(pow(2 * circ->raio, 2) - pow(h, 2));

    ret->base = lado;
    ret->altura = h;
    return ret;
}

Circ* circ_interno(Ret* r) {
    Circ* circ = (Circ*)malloc(sizeof(Circ));

    circ->raio = (r->base < r->altura) ? r->base / 2 : r->altura / 2;

    return circ;
}


int main() {
    Ret* Retangulo;
    Circ* Circulo;

    Circulo = (Circ*)malloc(sizeof(Circ));
    Retangulo = (Ret*)malloc(sizeof(Ret));

    if (Circulo == NULL || Retangulo == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    float h;

    printf("Informe o raio do círculo: ");
    scanf("%f", &Circulo->raio);

    printf("Informe qual a altura do retangulo circunscrito: ");
    scanf("%f", &h);

    Retangulo = ret_circunscrito(Circulo, h);

    printf("O maior retangulo circunscrito tem a base: %.2f e a altura: %.2f\n", Retangulo->base, Retangulo->altura);

    Circulo = circ_interno(Retangulo);

    printf("O maior círculo interno tem raio de: %.2f.\n", Circulo->raio);

    free(Circulo);
    free(Retangulo);

    return 0;
}

