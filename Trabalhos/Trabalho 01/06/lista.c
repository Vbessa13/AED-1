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
    struct no * ant;
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

int insere_elemento (Lista *lst, int elem) {
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;
    N->info = elem;
    N->ant = NULL;
    N->prox = *lst;

    if (lista_vazia(*lst) == 0){
        (*lst)->ant = N;
    }

    *lst = N;
    return 1;
}

int remove_elemento (Lista *lst, int elem) {
    if (lista_vazia(*lst) ==1)
        return 0;
    Lista aux = *lst;
    while (aux->prox != NULL && aux->info != elem)
        aux = aux->prox;
    if (aux->info != elem)
        return 0;
    if (aux->prox != NULL)
        (aux)->prox->ant = aux->ant;
    if (aux->ant != NULL)
        (aux)->ant->prox = aux->prox;
    if (aux == *lst)
        *lst = aux->prox;
    free(aux);
    return 1;
}

int imprime_lista(Lista lst){
    if(lista_vazia(lst) == 1){
        printf("Lista vazia.\n");
        return 0;
    }
    Lista aux = lst;
    printf("-[");
    while(aux->prox != NULL){
        printf(" %d -",aux->info);
        aux = aux->prox;
    }
    printf(" %d ]-\n",aux->info);
    return 1;
}

int tamanho(Lista lst){
    if(lista_vazia(lst) == 1){
        printf("Lista com 0 elementos.\n");
        return 0;
    }
    Lista aux = lst;
    int x=0;
    while(aux->prox != NULL){
        x++;
        aux = aux->prox;
    }
    x++;    //nao conta o ultimo elem
    printf("A lista tem %d elementos\n",x);
    return x;
}

int remove_maior(Lista *lst){
     if(lista_vazia(*lst) == 1)
        return 0;
    Lista aux = (*lst);
    int x = (*lst)->info;
    while(aux->prox != NULL){  //avancando -> Encontrando o maior
        if(x<aux->info)
            x = aux->info;
        aux = aux->prox;
    }
    if(aux->info > x)
        x = aux->info;
    while (aux->ant != NULL && aux->info != x) //voltando <- Remover o x
        aux = aux->ant;
    if (aux->info != x)
        return 0;
    if (aux->prox != NULL)
        (aux)->prox->ant = aux->ant;
    if (aux->ant != NULL)
        (aux)->ant->prox = aux->prox;
    if (aux == *lst)
        *lst = aux->prox;
    free(aux);
    return 1;
}

float media(Lista lst){
    Lista aux;

    aux = lst;
    float soma;
    float tam = tamanho(lst);
    float m;

    while(aux != NULL){
        soma += aux->info;
        aux = aux->prox;
    }

    m = soma/tam;

    return m;
}

int remove_todos(Lista *lst, int elem){
    if (lista_vazia(*lst) == 1)
        return 0;
    Lista aux3 = *lst;
    Lista aux2 = *lst;
    if (elem == (*lst)->info) {
        while(aux3->info == aux3->prox->info){
                aux2=aux3;
                aux3=aux3->prox;
                free(aux2);
            }
        *lst = aux3->prox;
        free(aux3);
    }
    Lista aux = *lst;
    while(aux->prox != NULL){
        if(aux->prox->info == elem){
            Lista aux2 = aux->prox;
            aux->prox = aux2->prox;
            free(aux2);

        }else{
        aux = aux->prox;}
    }
    return 1;
}

int mult(int a){
    if(a%3 == 0){
        return 1;
    }else{
        return 0;
    }
}

int multiplo(Lista *lst, Lista *lst2){
    if(lista_vazia(*lst) == 1)
        return 0;

    Lista aux = *lst;
    int x = 0;
    while (aux != NULL){
        x = aux->info;
        if(mult(x) == 1){
            insere_elemento(&lst2,x);
        }
        aux = aux->prox;
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
