//EXERCÍCIO: PONTEIROS
//--01--
int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;
return 0;
//X irá terminar tendo o valor 3, Y o valor 4 e *p o valor do endereço de y.

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

//--03--
#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2;
 *p2 = 10;
 b = 20;
 int **pp;
 pp = &p1;
 *p3 = **pp;
 int *p4 = &d;
 *p4 = b + (*p1)++;
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}

//A saída do programa deverá ser os valores 10, 21, 10, 21.

//--04--
#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro) {
    *area = (3 * pow(l, 2) * sqrt(3)) / 2;
    *perimetro = 6 * l;
}

int main() {
    float lado, area, perimetro;

    // Pede ao usuário para digitar o lado do hexágono
    printf("Digite o lado do hexagono: ");
    scanf("%f", &lado);

    // Calcula a área e o perímetro
    calcula_hexagono(lado, &area, &perimetro);

    // Dá os resultados do cálculo
    printf("Area do hexagono: %.2f\n", area);
    printf("Perimetro do hexagono: %.2f\n", perimetro);

    return 0;
}
