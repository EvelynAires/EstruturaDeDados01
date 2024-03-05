
// Definição da estrutura do nó da lista
typedef struct No {
    int info;
    struct No* prox;
} No;

// Definição da estrutura da lista
typedef struct Lista {
    No* inicio;
} Lista;

// Função para criar uma nova lista vazia
Lista* criarLista();

// Função para inserir um elemento no início da lista
void inserirInicio(Lista* l, int valor);

// Função para retornar o número de nós da lista que possuem o campo info com valores maiores do que n
int maiores(Lista* l, int n);

// Função para liberar a memória alocada para a lista
void liberarLista(Lista* l);

 /* LISTA_H */

