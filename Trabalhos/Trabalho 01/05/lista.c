/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct no {
    int info;
    struct no * prox;
};

Lista cria_lista() {
    return NULL;
}

int lista_vazia (Lista lst) {
    if (lst == NULL)
        return 1;
    else
        return 0;
}

int insere_final (Lista *lst, int elem) {
    //Aloca um novo nó e preenche o campo info
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;
    N->info = elem;
    //Trata lista vazia
    if (lista_vazia(*lst) == 1) {
        N->prox = N;//Faz o novo nó apontar para ele mesmo
        *lst = N;//Faz a lista apontar para o novo nó (ultimo nó)
    }
    //Trata lista com elementos (1 ou +)
    else {
        N->prox = (*lst)->prox;//Faz o novo nó apontar o 1º nó
        (*lst)->prox = N;//Faz o ultimo nó apontar para o novo nó
        *lst = N;//Faz a lista apontar para o novo nó (ultimo nó)
    }
    return 1;
}

int remove_inicio(Lista *lst, int *elem) {
    if (lista_vazia(*lst) == 1)
        return 0;
    Lista aux = (*lst)->prox;
    *elem = aux->info;
    if (*lst == (*lst)->prox)
        *lst = NULL;
    else
        (*lst)->prox = aux->prox;
    free(aux);
    return 1;
}

int print_lista(Lista lst){
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
        printf("Lista com 0 elementos!\n");
        return 0;}
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

int maior(Lista lst){
    if (lista_vazia (lst) == 1)
        return 0;
    int x = lst->info;
    Lista aux = lst->prox;
    while(aux->prox != lst->prox){
        if(x< aux->info)
            x = aux->info;
        aux = aux->prox;
    }
    return x;
}

int insere_inicio(Lista *lst, int elem){
    //Aloca um novo nó e preenche o campo info
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;
    N->info = elem;
}

int remove_par(Lista *lst){
        if (lista_vazia(*lst) == 1)
        return 0;
    Lista aux3 = *lst;
    Lista aux2 = *lst;
if ((*lst)->info%2==0) {
        while(aux3->prox->info%2==0){
                aux2=aux3;
                aux3=aux3->prox;
                free(aux2);
            }
        *lst = aux3->prox;
        free(aux3);
    }
    Lista aux = *lst;
    while(aux->prox != NULL){
        if(aux->prox->info %2 == 0){
            Lista aux2 = aux->prox;
            aux->prox = aux2->prox;
            free(aux2);

        }else{
        aux = aux->prox;}
    }
    return 1;
}
