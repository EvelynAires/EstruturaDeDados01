//--02--
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int alunos, a, b, aprovados = 0, prova;
    float media_ap = 6.0, media_aprovacao = 0.0;

    printf("Informe quantas questoes tem a prova: \n");
    scanf("%d", &prova);

    char * gabarito = (char*) malloc(prova*sizeof(char)); 
    if(gabarito == NULL){ 
        printf("Erro de alocacao \n");
        exit(1);
    }

    printf("Informe o gabarito de correcao da prova(v/f): \n");
    for(a = 0; a < prova; a++){
        scanf(" %c", &gabarito[a]); 

    printf("Informe a quantidade de provas:\n");
    scanf("%d", &alunos); 

    for(a = 0; a < alunos; a++){
        char * respostas = (char*) malloc(prova*sizeof(char)); 
        if(respostas == NULL){
            printf("Erro de alocacao");
            exit(1);
        }

        float nota = 0.0; 

        printf("Informe o gabarito de correcao do aluno(v/f): %d \n", a+1);
        for(b = 0; b < prova; b++){
            scanf(" %c", &respostas[b]); 

            if(gabarito[b] == respostas[b]){ 
                nota += 10.0/prova;
            }
        }
        printf("A nota do aluno %d : %.1f\n", a+1, nota); 
        if(nota > media_ap){
            aprovados++; 
        }

        free(respostas);
    }

    media_aprovacao = ((float) aprovados/alunos)*100; 
   

    printf("Total de alunos aprovados: %.0f%%", media_aprovacao);
   

    free(gabarito);

    return 0;
}
}