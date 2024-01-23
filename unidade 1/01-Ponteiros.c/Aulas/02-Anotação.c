#include <stdio.h>

void incrementa(int *ponteiro){
    (*ponteiro)++;
}

int main(void){
    int variavel = 5;
    incrementa(&variavel);
    printf("valor: %d", variavel);
    
    return 0;
}
