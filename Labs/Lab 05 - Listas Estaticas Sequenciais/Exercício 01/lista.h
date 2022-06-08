/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/


#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista * Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_elem(Lista lst, int elem);
int remove_elem(Lista lst, int elem);
int print_lista(Lista lst);


#endif // LISTA_H_INCLUDED
