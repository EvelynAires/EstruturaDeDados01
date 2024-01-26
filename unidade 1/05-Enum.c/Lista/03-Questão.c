//Escreva um programa que implementa uma struct Data com os campos dia, mˆes e ano. O mˆes deve
//ser armazenado como um enum com os valores JANEIRO, FEVEREIRO, MARC¸ O, ABRIL, MAIO,
//JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO e DEZEMBRO. O programa
//deve ler a data e imprimir a data no formato dd/mm/aaaa.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum mes {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Mes;

typedef struct data {
    int dia;
    Mes mes;
    int ano;
} Data;

int main() {
    Data data;
    char mes[20];
    printf("Informe o dia em números: \n");
    scanf("%d", &data.dia);
    printf("Informe o mes em letras: \n");
    scanf("%s", mes);
    printf("Informe o ano em números: \n");
    scanf("%d", &data.ano); 

    if (strcmp(mes, "JANEIRO") == 0) {
        data.mes = JANEIRO;
    } else if (strcmp(mes, "FEVEREIRO") == 0) {
        data.mes = FEVEREIRO;
    } else if (strcmp(mes, "MARCO") == 0) {
        data.mes = MARCO;
    } else if (strcmp(mes, "ABRIL") == 0) {
        data.mes = ABRIL;
    } else if (strcmp(mes, "MAIO") == 0) {
        data.mes = MAIO;
    } else if (strcmp(mes, "JUNHO") == 0) {
        data.mes = JUNHO;
    } else if (strcmp(mes, "JULHO") == 0) {
        data.mes = JULHO;
    } else if (strcmp(mes, "AGOSTO") == 0) {
        data.mes = AGOSTO;
    } else if (strcmp(mes, "SETEMBRO") == 0) {
        data.mes = SETEMBRO;
    } else if (strcmp(mes, "OUTUBRO") == 0) {
        data.mes = OUTUBRO;
    } else if (strcmp(mes, "NOVEMBRO") == 0) {
        data.mes = NOVEMBRO;
    } else if (strcmp(mes, "DEZEMBRO") == 0) {
        data.mes = DEZEMBRO;
    } else {
        printf("OPCAO INVALIDA!\n");
        return 1;
    }
    printf("data: %02d/%02d/%02d\n", data.dia, data.mes, data.ano);
    return 0;
}