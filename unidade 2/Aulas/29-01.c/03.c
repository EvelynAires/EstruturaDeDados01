#include<stdio.h>
#include<stdlib.h>

int main(void){

    FILE * arquivo = fopen("entrada.txt", "rt");
    int c;
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }
    else{
        printf("Arquivo criado!");
    }
    c = fgetc(arquivo);//Le um caractere do arquivo
    printf("%c\n",c);//Imprime o carctere lido
    if(!fclose(arquivo)){
        printf("Arquivo fechado com sucesso!");
    }//Fecha o arquivo criado
    return 0;
}