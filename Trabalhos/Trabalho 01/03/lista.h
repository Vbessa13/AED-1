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
int insere_ord(Lista *lst, int elem);
int remove_ord(Lista *lst, int elem);
void imprime_lista(Lista lst);
int tamanho_lista(Lista lst);
int retorna_impares(Lista *lst, Lista *lst2);
int igual(Lista p, Lista q);
int intercala_lista(Lista p, Lista q, Lista *r);
float media(Lista lst);
int inverte_lista(Lista *lst, Lista *lst2);
int insere_elem(Lista *lst, int elem);

#endif // LISTA_H_INCLUDED
