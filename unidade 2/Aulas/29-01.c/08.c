#include<stdio.h>
#include<stdlib.h>

int main(void){
    //Cria o arquivo: entrada_escrita.txt no modo texto
    FILE * arquivo = fopen("entrada.txt", "w");
   
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }
    else{
        printf("Arquivo criado!");
    }

    fprintf(arquivo, "Meu texto!");
    
    if(!fclose(arquivo)){
        printf("Arquivo fechado com sucesso!");
    }//Fecha o arquivo criado
    return 0;
}