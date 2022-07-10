#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista * Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_elem(Lista lst, int elem);
int remove_elem(Lista lst, int elem);
int print_lista(Lista lst);
int menor_elem(Lista lst);
int concatena_lista(Lista p, Lista q, Lista r);
int tamanho_lista(Lista lst);
int remove_impar(Lista lst);
int insere_ord(Lista lst, int elem);
int ordenar_lista(Lista lst);


#endif // LISTA_H_INCLUDED
