

typedef struct lista Lista;

/*
Função que inicializa a lista
atribuindo NULL
Retorna: lista inicializada
*/
Lista * cria_lista(void);

/*
Função que insere elemento inteiro na lista
Argumentos:
  Lista * lista;
  int valor: valor inteiro a ser inserido
Retorno:
  Nova Lista
*/
Lista * insere_elemento(Lista * lista, int valor);