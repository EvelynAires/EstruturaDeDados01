#include <stdio.h>

int soma(int a, int b){
    return a+b;
}
int subtracao(int a, int b){
    return a-b;
}
int multiplicacao(int a, int b){
    return a * b;
}
int divisao(int a, int b){
    if (b|= 0){
        return a / b;
    }else {
        printf("ERRO: divisao por zero.\n");
    }
}
int calcula(int x, int y, int(*operacao)(int, int)){
    return (*operacao)(x, y);
}
int main(){
    int resultado = calcula(10,5, subtracao);
    printf("resultado: %d", resultado);
    return 0;
}