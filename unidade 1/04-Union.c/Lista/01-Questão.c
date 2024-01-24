//EXERCÍCIO
//--01--

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union {
    char MASCULINO[15];
    char FEMININO[15];
} generomf;

typedef struct {
    char nome[25];
    int idade;
    generomf Genero;
} person;

void preencha(person *ps) {
    int escolher;
    printf("Informe o seu nome: \n");
    scanf(" %[^\n]", ps->nome);
    printf("Informe a sua idade: \n");
    scanf("%d", &ps->idade); 
    printf("Digite 1 para Masculino ou 2 para Feminino: \n");
    scanf("%d", &escolher);
    switch (escolher) {
    case 1:
        strcpy(ps->Genero.MASCULINO, "Masculino");
        break;
    case 2:
        strcpy(ps->Genero.FEMININO, "Feminino");
        break;
    default:
        exit(1);
        break;
    }
}

void imprimir(person *ps) {
    printf("nome: %s\n", ps->nome);
    printf("Idade: %d\n", ps->idade);
    
    
    if (ps->Genero.MASCULINO[0] != '\0') {
        printf("Genero: %s\n", ps->Genero.MASCULINO);
    } else if (ps->Genero.FEMININO[0] != '\0') {
        printf("Genero: %s\n", ps->Genero.FEMININO);
    }
}

int main() {
    person *ps = malloc(sizeof(person));
    preencha(ps);
    imprimir(ps);
    free(ps);

    return 0;
}