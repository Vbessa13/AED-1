/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/


#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct no * Lista;

int lista_vazia (Lista lst);
int insere_elemento (Lista *lst, int elem);
int remove_elemento (Lista *lst, int elem);
int imprime_lista(Lista lst);
int tamanho(Lista lst);
int remove_maior(Lista *lst);
float media(Lista lst);
int remove_todos(Lista *lst, int elem);
int multiplo(Lista *lst, Lista *lst2);
int igual(Lista p, Lista q);



#endif // LISTA_H_INCLUDED

