/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/


#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct no * Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int remove_inicio(Lista *lst, int *elem);
int print_lista(Lista lst);
int maior(Lista lst);
int concatena_lista(Lista p, Lista q, Lista r);
int tamanho_lista(Lista lst);
int insere_final(Lista *lst, int elem);
int remove_par(Lista *lst);


#endif // LISTA_H_INCLUDED
