#include <stdio.h> 
#include <stdlib.h>

int main(void){
    int tamanho = 5;
    int cont;
    int * vetor = (int*) malloc(tamanho*sizeof(int));

    if(vetor == NULL){
        exit(1);
    } else {
        printf("Alocacao realizada com sucesso! \n");
    }

    printf("Digite os valores do vetor: \n");
    for(cont = 0; cont < tamanho;  cont++){
        scanf("%d", &vetor[cont]); 
       
    }
    
    free(vetor);
}
