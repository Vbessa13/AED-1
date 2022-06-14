/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <string.h>

struct no{
    int volume;
    float preco;
    char nome[20];
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

int insere_elem(Lista *lst, int vol, float pr, char* nm){
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL){
        return 0;
    }
    N->volume = vol;
    N->preco = pr;
    strcpy(N->nome, nm);
    N->prox = *lst;
    *lst = N;
    return 1;
}

int remove_elem(Lista *lst, char* nm){
    if(lista_vazia(*lst) == 1)
        return 0;
    Lista aux = *lst;
    if(strcmp(nm,(*lst)->nome)==0){
        *lst = aux->prox;
        free(aux);
        return 1;
    }
    while(aux->prox != NULL && aux->prox->nome != nm)
        aux = aux->prox;
    if(aux->prox == NULL)
        return 0;
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

void imprime_lista(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf(" -[ ]-\n");
        return;
    }
    printf(" -[");
    while(aux != NULL){
            printf(" nome: ");
        for(int h=0; h<strlen(aux->nome); h++){
            printf("%c",aux->nome[h]);
        }
            printf("; volume: %d ml;",aux->volume);
            printf(" preco: %.2f;",aux->preco);
            printf(" | ");
        aux = aux->prox;
    }
    printf(" ]-\n");
}


