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

int insere_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1 || elem <= (*lst)->info) {
            Lista N = (Lista) malloc(sizeof(struct no));
            if(N == NULL)
                return 0;


        N->info = elem;
        N->prox = *lst;
        *lst = N;
        return 1;

    }else{
        return insere_ord(&(*lst)->prox, elem);

    }
}

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1 || elem < (*lst)->info)
        return 0;

    if (elem == (*lst)->info) {
        Lista aux = *lst;
        *lst = aux->prox;
        free(aux);
        return 1;
    }else{
        return remove_ord(&(*lst)->prox, elem);
        }
}


void imprime_lista(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf(" -[ ]-\n");
        return 0;
    }
    printf(" -[");
    while(aux != NULL){
        printf(" %d",aux->info);
        aux = aux->prox;
    }
    printf(" ]-\n");
}
