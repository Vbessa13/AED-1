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
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;
    N->info = elem;
    if (lista_vazia(*lst) || elem <= (*lst)->info) {
        N->prox = *lst;
        *lst = N;
        return 1; }
    Lista aux = *lst;
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;
    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}

int remove_ord (Lista *lst, int elem) {
        if (lista_vazia(*lst) == 1 || elem < (*lst)->info)
        return 0;
    Lista aux = *lst;
    if (elem == (*lst)->info) {
        *lst = aux->prox;
        free(aux);
        return 1; }
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;
    if (aux->prox == NULL || aux->prox->info > elem)
        return 0;
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

void imprime_lista(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf(" -[ >>LISTA VAZIA<< ]-\n");
    }else{
    printf(" -[");
    while(aux != NULL){
        printf(" %d",aux->info);
        aux = aux->prox;
    }
    printf(" ]-\n");
    }
}

int tamanho_lista(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf("A lista tem 0 elementos.\n");
        return 0;
    }
    int x = 0;
    while(aux != NULL){
        x++;
        aux = aux->prox;
    }
    return x;
}

int retorna_impares(Lista *lst, Lista *lst2){
        if (lista_vazia(*lst) == 1)
        return 0;
    int x;
    Lista aux;
    for (aux = *lst; aux != NULL; aux = aux->prox){
        if(aux->info%2 == 1){
          x = aux->info;
          insere_ord(lst2, x);
        }
    }
    return 1;
}

int igual(Lista p, Lista q){
     if (lista_vazia(p) == 1 && lista_vazia(q) == 1){
        printf("Listas Vazias iguais\n");
        return 0;
     }
     if (lista_vazia(p) == 0 &&  lista_vazia(q) == 1 || lista_vazia(p) == 1 &&  lista_vazia(q) == 0 ){
        printf("Uma lista eh vazia e a outra n \n");
        return 0;
     }
     Lista auxp = p;
     Lista auxq = q;
     while(auxp->prox != NULL && auxq->prox != NULL){
        if(auxp->info != auxq->info){
            printf("listas diferentes\n");
            return 0;
        }
        auxp = auxp->prox;
        auxq = auxq->prox;
     }
     if(auxp->prox == NULL && auxq->prox == NULL){
     printf("Listas iguais \n");
     return 0;}
     else{
        printf("Listas com tamanhos diferentes nao sao iguais\n");
        return 0;
     }
}

int intercala_lista(Lista p, Lista q, Lista *r){//Intercala 2 listas em uma terceira lista
    Lista aux3 = (*r);
    Lista aux1 = p;
    Lista aux2 = q;
    Lista novo;
    while(aux1!=NULL && aux2 != NULL){
        novo = (Lista) malloc(sizeof(struct no));
        if (novo == NULL) { return 0; }
        if(aux1->info <= aux2->info){
            novo->info = aux1->info;
            aux1=aux1->prox;
        }else{
        novo->info = aux2->info;
        aux2=aux2->prox;
        }
        if((*r) == NULL){
            (*r)=novo;
        }else
        aux3->prox=novo;
    aux3 = novo;

    }
    while(aux1!=NULL){
        novo = (Lista) malloc(sizeof(struct no));
        if (novo == NULL) { return 0; }
        novo->info = aux1->info;
        aux1 = aux1->prox;
        if((*r)==NULL)
            (*r)=novo;
        else
            aux3->prox = novo;
        aux3 = novo;

    }
    while(aux2!=NULL){
        novo = (Lista) malloc(sizeof(struct no));
        if (novo == NULL) { return 0; }
        novo->info = aux2->info;
        aux2 = aux2->prox;
        if((*r)==NULL)
            (*r)=novo;
        else
            aux3->prox = novo;
        aux3 = novo;

    }
    if(aux3 != NULL)
        aux3->prox = NULL;
    return 1;
}

float media(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf("Lista vazia\n\n");
        return 0;
    }
    int soma = 0;
    while(aux->prox != NULL){
        aux = aux->prox;
        soma = soma + aux->info;
    }
    soma = soma + lst->info;
    int t = tamanho_lista(lst);
    float med;
    med = soma/t;
    return med;
}

int insere_elem(Lista *lst, int elem){          //Insere o elemento (alocando)
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;
    N->info = elem;
    N->prox = *lst;
    *lst = N;
    return 1;
}

int inverte_lista(Lista *lst, Lista *lst2){
    if(lista_vazia(*lst) == 1)
        return 0;
    int x;
    Lista aux;
    for(aux = *lst; aux != NULL; aux = aux->prox){
        x = aux->info;
        insere_elem(lst2, x);
    }
    return 1;
}
