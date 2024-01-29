#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE* arquivo = fopen("entrada.txt","wt");
    if(arquivo == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }else{
        printf("O arquivo foi criado!\n");
    }
    if (fclose(arquivo)){
        printf("Arquivo foi fechado com sucesso!");
    }//Fecha arquivo que foi criado
    
    return 0;
}