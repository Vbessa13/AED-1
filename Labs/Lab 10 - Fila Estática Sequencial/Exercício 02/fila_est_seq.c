#include <stdio.h>
#include <stdlib.h>
#include "fila_est_seq.h"
#define max 20

struct fila{
    int no[max];
    int ini, cont;
};

Fila cria_fila(){
    Fila f;
    f = (Fila)malloc(sizeof(struct fila));
    if(f != NULL){
        f->ini = 0;
        f->cont = 0;
    }
    return f;
}

int fila_vazia(Fila f){
    if(f->cont == 0)
        return 1;
    else
        return 0;
}

int fila_cheia(Fila f){
    if(f->cont == max)
        return 1;
    else
        return 0;
}

int insere_fim(Fila f, int elem){
    if(fila_cheia(f) == 1)
        return 0;
    f->no[(f->ini+f->cont)%max] = elem;
    f->cont++;
    return 1;
}

int remove_ini(Fila f, int *elem){
    if(fila_vazia(f) == 1)
        return 0;
    *elem = f->no[f->ini];
    f->ini = (f->ini+1)%max;
    f->cont--;
    return 1;
}

void print_fila (Fila f){
	int elem;
	Fila aux;
    aux = cria_fila();

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
