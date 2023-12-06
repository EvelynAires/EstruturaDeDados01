#include <stdio.h>
#include <stdlib.h>
int main(void){
    int tamanho= 5;
    int contador;
    int *vetor = (int*)malloc(tamanho*sizeof(int));
    if (vetor==NULL){
        exit(1); //aborda a execução do programa
    }else{
        printf("acao bem sucedida\n");
    }
    printf("Digite os valores do vetor\n");
   for(contador=0; contador<tamanho; contador++){
        scanf("%d", &vetor[contador]);
    }
    free(vetor);
    return 0;
}
