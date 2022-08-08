/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "Pilha_est_seq.h"
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

int imprime_pilha (Pilha p){        // x y z] -> ] significa fim da pilha
    if (pilha_vazia(p) == 1){
        printf("Pilha vazia.\n");
        return 0;
    }
    int x = p->topo;
    printf("-topo-[");
    while(x > -1){
        printf(" %d",p->no[x]);
        x--;
    }
    printf("]-base-\n");
    return 1;
}

int palindrome(char x[100],int tam){
    int k,t=0,a,b;
    Pilha p,q;
    p = cria_pilha();
    q = cria_pilha();
    for(k=0;k<tam;k++){
        push(p,x[k]);   //transforma letras em numeros (decimal) (ASCII)
    }
    for(k=tam-1;k>=0;k--){
        push(q,x[k]);
    }
    while(t<=tam){
        pop(p,&a);
        pop(q,&b);
        if(a != b){
            printf("Nao sao palindromos\n");
            return 0;
        }
        t++;
    }
    printf("Sao palindomos!\n");
    return 1;
}

int pares_e_impares (Pilha a, Pilha par, Pilha impar){
    if (pilha_vazia (a) == 1){
        printf("Pilha vazia!\n");
        return 0;}
    int x;
    while(pilha_vazia (a) != 1){
        pop(a,&x);
        if(x%2==0){
            push(par,x);
        }
        else{
            push(impar,x);
        }
    }
    return 1;
}
