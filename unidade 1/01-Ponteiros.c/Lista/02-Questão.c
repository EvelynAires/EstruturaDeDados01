//--02--
nt main(void) {
int x, *p;
x = 100;
p = x;
printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
}

//A) Erro
//B) Por haver um erro onde se encontra "p=x;", onde está armazenando o valor de x para p, o ponteiro deveria estar atribuindo um endereço de alguma variável.
//C) Não.
//D)
#include <stdio.h>

int main(void) {

    int x, *p;
    x=100;
    p=&x;
    printf("Valor de p=%p\tValor de *p=%d", p, *p);
}
//E) Sim.
