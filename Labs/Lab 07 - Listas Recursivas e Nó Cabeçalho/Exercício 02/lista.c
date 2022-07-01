/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no{
    int info;
    struct no * prox;
};

Lista cria_lista(){
    //Aloca n� cabe�alho
    Lista cab;
    cab = (Lista) malloc(sizeof(struct no));
    //Coloca lista no estado de vazia
    if(cab != NULL){//S� se a aloca��o N�O falhar
        cab->prox = NULL;
        cab->info = 0;}//Opcional: guardar qtde
        return cab;
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 1;//Lista vazia
    else
        return 0;//Lista N�O vazia
}

int insere_elem(Lista *lst, int elem){
    //aloca um novo n�
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL){//Falha: n� n�o alocado
        return 0;
    }
    N->info = elem;//insere o conte�do(valor do elem)
    //Percorrimento da lista
    Lista aux = *lst;//Faz aux apontar para o n� cabe�alho
    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;//Avan�a
    //Insere o novo n� na lista
    N->prox = aux->prox;
    aux->prox = N;
    (*lst)->info++;//Opcional: incrementa qtde de n�s na lista
    return 1;
}

int remove_elem(Lista *lst, int elem){
    if(lista_vazia(lst) == 1)
        return 0;//Falha
    Lista aux = *lst;//Ponteiro auxiliar para o n� cabe�alho
    //Percorrimento at� final da lista, achar ekem ou n� maior
    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;
    if(aux->prox == NULL || aux->prox->info > elem)
        return 0;//Falha
    //Remove elemento da lista
    Lista aux2 = aux->prox;//Aponta n�  a ser removido
    aux->prox = aux2->prox;//Retira n� da lista
    free(aux2);//Libera memoria alocada
    (*lst)->info--;//Opcional: Decrementa qtde de n�s da lista
    return 1;
}

void imprime_lista(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf(" -[ ]-\n");
        return 0;
    }
    printf(" -[ %d |",aux->info);
    aux = aux->prox;
    while(aux != NULL){
        printf(" %d",aux->info);
        aux = aux->prox;
    }
    printf(" ]-\n");
}

int tamanho(Lista lst){
    return lst->info;
}

