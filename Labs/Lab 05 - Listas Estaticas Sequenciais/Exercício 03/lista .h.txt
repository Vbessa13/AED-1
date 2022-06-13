#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista * Lista;
typedef struct Bebida bebida;

Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_elem(Lista lst, char n, int v, float p);
int remove_elem(Lista lst, char n);
int print_lista(Lista lst);


#endif // LISTA_H_INCLUDED
