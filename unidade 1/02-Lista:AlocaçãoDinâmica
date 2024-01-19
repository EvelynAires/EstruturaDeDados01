//EXERCÍCIO:Alocação Dinâmica
//--01--
#include <stdio.h>
#include <stdlib.h>

void porcentagem (char * questaoA, char * questaoB, int entrevistas, float *porcentF, float *porcentM){
    float contM = 0;
    float contMG= 0;
    float contF = 0;
    float contFN = 0;

    for(int i = 0; i < entrevistas; i++){
        if(questaoA[i] == 'm' || questaoA[i] == 'M'){
            contM++;
            if(questaoB[i] == 'G' || questaoB[i] == 'g'){
                contMG++;
            }
        } else if(questaoA[i] == 'F' || questaoA[i] == 'f'){
            contF++;
            if(questaoB[i] == 'N' || questaoB[i] == 'n'){
                contFN++;
            }
        }
    }
    *porcentF = (float) (contF/contFN) *100;
    *porcentM = (float) (contM/contMG) * 100;
}

int main(void){
    int entrevistas, n;

    printf("Digite o numero de pessoas que serao entrevistadas.\n");
    scanf("%d", &entrevistas);

    char * questaoA = (char*) malloc(entrevistas*sizeof(char));
    char * questaoB = (char*) malloc(entrevistas*sizeof(char));

    if(questaoA == NULL || questaoB == NULL){
        printf("Erro de alocacao de memoria. \n");
        exit(1);
    }
    for(n = 0; n < entrevistas; n++){
        printf("Qual o seu sexo? (M/F)\n");
        printf("M-Masculino\n");
        printf("F-Feminino\n");
        scanf(" %c", &questaoA[n]);

        printf("Voce gostou do nosso produto? (G/N)\n");
        printf("G-Gostou\n");
        printf("N-Nao Gostou\n");
        scanf(" %c", &questaoB[n]);
    }  
    float porcentF, porcentM;
    porcentagem(questaoA, questaoB, entrevistas, &porcentF, &porcentM);
    printf("Porcentagem de mulheres que gostaram do produto é: %.0f%%\n", porcentF);
    printf("Porcentagem de homens que nao gostaram do produto é: %.0f%%\n", porcentM);
    
    free(questaoA);
    free(questaoB);

    return 0;
}

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
