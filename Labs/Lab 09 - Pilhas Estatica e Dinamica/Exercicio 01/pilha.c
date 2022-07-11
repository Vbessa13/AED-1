/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define max 20          //max eh o tamanho da pilha


struct pilha {
    int no [max];
    int topo;
};

Pilha cria_pilha () {            //Criando a pilha(alocando)
    Pilha p;
    p = (Pilha) malloc (sizeof (struct pilha));
    if (p != NULL)
        p->topo = -1;
    return p;
}

int pilha_vazia (Pilha p) {         //Verificando se a pilha esta vazia
    if (p->topo == -1)
        return 1;
    else
        return 0;
}

int pilha_cheia (Pilha p) {         //Verificando se a pilha esta cheia
    if (p->topo == max-1)
        return 1;
    else
        return 0;
}

int push (Pilha p, int elem) {          //Insere o elemento no topo da pilha
    if (p == NULL || pilha_cheia(p) == 1)
        return 0;
    p->topo++;
    p->no[p->topo] = elem;
    return 1;
}

int pop (Pilha p, int *elem) {          //Remove o elemento do topo da pilha
    if (p == NULL || pilha_vazia(p) == 1)
        return 0;
    *elem = p->no[p->topo];
    p->topo--;
    return 1;
}

int le_topo (Pilha p, int *elem) {          //Retorna o elemento do topo da pilha
    if (p == NULL || pilha_vazia(p) == 1)
        return 0;
    *elem = p->no[p->topo];
    return 1;
}

int imprime_pilha (Pilha p){        //Imprime a pilha (topo para a base)
    if (p == NULL )
        return 0;
    if (pilha_vazia(p) == 1){
        printf("Pilha vazia.\n");
        return 0;
    }
    int x = 0;
    printf("-base-[");
    while(x <= p->topo){
        printf(" %d",p->no[x]);
        x++;
    }
    printf(" ]-topo-\n");
    return 1;
}
