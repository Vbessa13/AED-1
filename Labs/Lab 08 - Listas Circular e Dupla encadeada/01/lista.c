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
    return NULL;
}

int lista_vazia(Lista lst){
    if(lst == NULL)
        return 1;
    else
        return 0;
}

int insere_final(Lista *lst, int elem){
    //Aloca um novo nó e preenche o campo info
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL){
        return 0;//Falha: nó nao alocado
    }
    N->info = elem;//Insere o conteúdo (valor do elem)

    //Trata lista vazia
    if(lista_vazia(*lst)==1){
        N->prox = N;//Faz o novo nó apontar para ele mesmo
        *lst = N;//Faz a lista apontar para o novo nó(ultimo nó)
    }

    //trata lista com elementos(1 ou +)
    else{
        N->prox = (*lst)->prox;//Faz o novo nó apontar o 1º nó
        (*lst)-> prox = N;//Faz o último nó apontar para o novo nó
        *lst = N;//Faz a lista apontar para o novo nó(ultimo nó)
    }
    return 1;
}

int remove_inicio(Lista *lst, int *elem){
    //Trata lista vazia
    if(lista_vazia(*lst) == 1)
        return 0;
    Lista aux = (*lst)->prox;//Faz aux apontar para o 1º nó
    *elem = aux->info;//Retoma valor do nó a ser removido
    if(*lst == (*lst)->prox)//Trata lista com 1 unico nó
        *lst = NULL;
    else//Trata lista com + de 1 elemento
        (*lst)->prox = aux->prox;
        free(aux);
        return 1;
}

int imprime_lista(Lista lst){
    if (lista_vazia(lst) == 1){
        printf("Lista vazia!\n");
        return 0;}
    Lista aux = (lst)->prox;
    printf("-[");
    while(aux->prox != (lst)->prox){
        printf(" %d -",aux->info);
        aux = aux->prox;
    }
    printf(" %d ]-\n",aux->info);
    return 1;
}

int tamanho_lista(Lista lst){
    if (lista_vazia(lst) == 1){
        printf(" -[ >>> LISTA VAZIA <<< ]-\n");
        return 0;
    }
    Lista aux = lst->prox;
    int tam =0;
    while(aux->prox != (lst)->prox){
        tam++;
        aux = aux->prox;
    }
    tam++;  //o while nao conta o ultimo elemento
    printf("A lista tem %d elementos.\n",tam);
    return 1;
}
