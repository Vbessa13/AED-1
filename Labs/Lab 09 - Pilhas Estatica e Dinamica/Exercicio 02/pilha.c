/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"


struct pilha {
    int info;
    struct no* prox;
};

Pilha cria_pilha () {           //Cria a pilha
    return NULL;
}

int pilha_vazia (Pilha p) {         //Verifica se a pilha esta vazia
    if (p == NULL)
        return 1;
    else
        return 0;
}

int push(Pilha *p, int elem) {         //Insere o elemento no topo da pilha
    Pilha N = (Pilha) malloc(sizeof(struct pilha));
    if (N == NULL)
        return 0;

    N->info = elem;
    N->prox = *p;
    *p = N;
    return 1;
}

int pop (Pilha *p, int *elem) {         //Remove o elemento do topo da pilha
    if (pilha_vazia(*p) == 1)
        return 0;
    Pilha aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);
    return 1;
}

int le_topo (Pilha p, int *elem) {          //Retorna o elemento do topo da pilha
    if (pilha_vazia(p) == 1)
        return 0;
    *elem = (p)->info;
    return 1;
}

int imprime_pilha (Pilha p) {           //Imprime a pilha
    if (pilha_vazia (p) == 1){
        printf("Pilha vazia!\n");
        return 0;
    }
    Pilha aux = p;
    printf("(topo) -");
    while(aux->prox != NULL){
        printf(" %d -",aux->info);
        aux = aux->prox;
    }
    printf(" %d ]- base\n",aux->info);
    return 1;
}
