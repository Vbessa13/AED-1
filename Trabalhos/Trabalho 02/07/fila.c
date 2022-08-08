/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct no {
    int info;
    struct no * prox;
};

Fila cria_fila(){
   return NULL;
}

int fila_vazia(Fila f){
    if(f == NULL)
        return 1;
    else
        return 0;
}

int insere_fim(Fila *f, int elem){
    Fila N = (Fila) malloc(sizeof(struct no));
    if(N == NULL)
        return 0;
    N->info = elem;
    if(fila_vazia(*f) == 1){
        N->prox = N;
        *f = N;
    }
    else{
        N->prox = (*f)->prox;
        (*f)->prox = N;
        *f = N;
    }
    return 1;
}

int remove_ini(Fila *f, int *elem){
    if(fila_vazia(*f) == 1)
        return 0;
    Fila aux = (*f)->prox;
    *elem = aux->info;
    if(*f == (*f)->prox)
        *f = NULL;
    else
        (*f)->prox = aux->prox;
    free(aux);
    return 1;
}

void print_fila (Fila f){
	Fila aux;
    aux = cria_fila();
    if(fila_vazia(f)==1){
        printf(" >>> FILA VAZIA <<< \n");
        return 0;
    }

    aux = f->prox;

    while(aux != f){
            printf(" %d",aux->info);
            aux = aux->prox;
    }
    printf(" %d",f->info);
    printf("\n\n");
}

int le_final(Fila *f){
    if(fila_vazia(*f)==1){
        printf(" >>> FILA VAZIA <<< \n");
        return 0;
    }
    printf("Final: %d \n",(*f)->info);
    return 1;
}
