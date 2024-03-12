

typedef struct pilha Pilha;
/*Criar uma pilha vazia*/
Pilha* pilha_cria(void);

/*Inserir um elemento no topo*/
void pilha_push(Pilha* p, float v);

/*Remover o elemento do topo*/
float pilha_pop (Pilha* p);

/*Verificar se a pilha está vazia*/
int pilha_vazia (Pilha* p);

/*Liberar a estrutura da pilha*/
void pilha_libera (Pilha* p);

void pilha_imprime (Pilha* p);