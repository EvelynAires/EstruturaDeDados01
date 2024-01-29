#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* fp;
    fp = fopen("entrada.txt", "wt");
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }else{
        printf("O arquivo foi criado!\n");
    }
    return 0;
}