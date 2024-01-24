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