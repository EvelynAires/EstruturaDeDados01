//3. Voce foi contratado para desenvolver um programa em C que permita o cadastro de frutas e seus
//precos em um arquivo de dados. O programa deve usar uma estrutura (struct) para armazenar os
//detalhes de cada fruta, incluindo o nome da fruta e o preco.
//O programa deve realizar as seguintes acoes:
//Definir uma estrutura chamada Fruta com os seguintes campos:
//– nome (string) para armazenar o nome da fruta.
//– preco (float) para armazenar o preco da fruta.
//Permitir que o usuario insira os dados das frutas via teclado.
//O usuario poder´a cadastrar m´ultiplas frutas em uma unica execucao do programa. Para cada fruta,
//o programa deve solicitar:
//O nome da fruta.
//O preco da fruta.
//Apos inserir os dados de cada fruta, o programa deve salvar as informacoes no arquivo ”frutas.txt”.
//Cada linha do arquivo deve conter o nome da fruta e seu preco, separados por vırgula.
//O programa deve continuar solicitando os dados das frutas ate que o usuario decida parar.
//Quando o usuario decidir parar de cadastrar frutas, o programa deve exibir uma mensagem de encerramento e fechar o arquivo.

#include <stdio.h>
#include <stdlib.h>

typedef struct fruta {
    char nome[30];
    float preco;
}Fruta;

int main() {
    FILE *arquivo;
    Fruta fruta;
    char continuar;
    
    arquivo = fopen("frutas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    do {
        printf("Informe o nome da fruta: ");
        scanf(" %[^\n]s", fruta.nome);
        printf("Digite o preco: ");
        scanf("%f", &fruta.preco);
        
        // Escreve os dados da fruta no arquivo
        fprintf(arquivo, "%s, %.2f\n", fruta.nome, fruta.preco);
        
        // Pergunta ao usuário se deseja cadastrar mais frutas
        printf("Deseja cadastrar mais alguma fruta? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
    
    fclose(arquivo);
    
    printf("Cadastro de frutas finalizado. Verifique o arquivo 'frutas.txt'.\n");
    
    return 0;
}
