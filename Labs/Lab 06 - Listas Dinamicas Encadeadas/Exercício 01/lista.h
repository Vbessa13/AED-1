/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct no * Lista;

Lista cria_lista();
int lista_vazia(Lista lst);
int insere_elem(Lista *lst, int elem);
int remove_elem(Lista *lst, int elem);
int menor_elem(Lista *lst);
void tamanho_lista(Lista lst);
void imprime_lista(Lista lst);

#endif // LISTA_H_INCLUDED
