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
