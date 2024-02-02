//Questão 2) Escreva um programa em C que preencha um vetor de 10 inteiros com informações
//vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem
//como a média dos elementos do vetor, como ilustrado a seguir. 

#include<stdio.h>
#include<stdlib.h>

void adicionar(){
    FILE * entrada = fopen("entrada_q1.txt", "w");
    
    if (entrada == NULL){
        printf("Erro ao abrir!\n");
        exit(1);
    }

    int num;
    for(int cont = 0; cont < 10; cont++){
        printf("Informe o numero %d: ", cont+1);
        scanf("%d", &num);
        fprintf(entrada, "%d\n", num);
    }

    printf("Numeros adicionados!\n");
    fclose(entrada);
}

void preencher(FILE * entrada, int * vetor){
    int cont = 0;
    while(fscanf(entrada, "%d\n", &vetor[cont]) != EOF){
        cont++;
    }
}

void menor_num(int * vetor, FILE * saida){
    int cont;
    int menor = vetor[0];
    for(cont = 0; cont < 10; cont++){
        if(vetor[cont] < menor){
            menor = vetor[cont];
        }
    }
    fprintf(saida, "Menor elemento: %d\n", menor);
}

void maior_num(int * vetor, FILE * saida){
    int cont;
    int maior = vetor[0];
    for(cont = 0; cont< 10; cont++){
        if(vetor[cont] > maior){
            maior = vetor[cont];
        }
    }
    fprintf(saida, "Maior elemento: %d\n", maior);
}

void media(int * vetor, FILE * saida){
    int cont;
    int soma = 0;
    for(cont = 0; cont < 10; cont++){
        soma += vetor[cont];
    }
    fprintf(saida, "Media: %f\n", (float)soma/10);
}

int main(void){
    int vetor[10];
    FILE * entrada = fopen("entrada_q1.txt", "r");
    FILE * saida = fopen("saida_q1.txt", "w");

    if (entrada == NULL){
        printf("Erro ao abrir!\n");
        exit(1);
    }

    adicionar();
    preencher(entrada, vetor);
    menor_num(vetor, saida);
    maior_num(vetor, saida);
    media(vetor, saida);


    printf("Numeros copiados.\n");
    fclose(entrada);
    fclose(saida);
    return 0;
}