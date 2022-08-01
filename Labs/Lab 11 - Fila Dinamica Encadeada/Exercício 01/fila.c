#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct no {
    int info;
    struct no * prox;
};

struct fila{
    struct no * ini;
    struct no * fim;
};

Fila cria_fila(){
    Fila f;
    f = (Fila)malloc(sizeof(struct fila));
    if(f != NULL){
        f->ini = NULL;
        f->fim = NULL;
    }
    return f;
}

int fila_vazia(Fila f){
    if(f->ini == NULL)
        return 1;
    else
        return 0;
}

int insere_fim(Fila f, int elem){
    struct no * N;
    N = (struct no *)malloc(sizeof(struct no));
    if(N == NULL)
        return 0;
    N->info = elem;
    N->prox = NULL;
    if(fila_vazia(f) == 1)
        f->ini = N;
    else
        (f->fim)->prox = N;
    f->fim = N;
    return 1;
}

int remove_ini(Fila f, int *elem){
    if(fila_vazia(f) == 1)
        return 0;
    struct no * aux = f->ini;
    *elem = aux->info;
    if(f->ini == f->fim)
        f->fim = NULL;
    f->ini = aux->prox;
    free(aux);
    return 1;
}

void print_fila (Fila f){
	int elem;
	Fila aux;
    aux = cria_fila();

    if(fila_vazia(f)==1){
        printf(">>> FILA VAZIA <<< \n ");
        return 0;
    }

	for (;fila_vazia(f) == 0;){
        if(remove_ini(f,&elem) == 0)
            printf("erro ao remover\n");
		printf(" %d",elem);
        if(insere_fim(aux,elem) == 0)
            printf("erro ao inserir\n");
	}

	for (;fila_vazia(aux) == 0;){
        remove_ini(aux,&elem);
        insere_fim(f,elem);
	}
	printf("\n\n");
}

int le_final(Fila f){
    if(fila_vazia(f)==1){
        printf(">>> FILA VAZIA <<< \n ");
        return 0;
    }
    int elem;
    elem = f->fim->info;
    printf("Final : %d \n\n",elem);
    return 1;
}
