#include<stdio.h>
#include<stdlib.h>

int main(void){

    FILE * arquivo = fopen("entrada.txt", "r");
    char c[20];
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }
    else{
        printf("Arquivo criado!");
    }
    fscanf(arquivo, "%s", c);
    printf("%s\n",c);//Imprime o carctere lido
    
    if(!fclose(arquivo)){
        printf("Arquivo fechado com sucesso!");
    }//Fecha o arquivo criado
    return 0;
}