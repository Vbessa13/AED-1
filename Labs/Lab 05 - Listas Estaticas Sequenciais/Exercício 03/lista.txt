#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define max 20

struct Bebida{
    char nome[20];
    int volume;
    float preco;
};
//typedef struct Bebida bebida;

struct lista {
    bebida[max];
    int Fim;
};

Lista cria_lista(){
    Lista lst;
    lst = (Lista) malloc(sizeof(struct lista));

    if(lst != NULL)
        lst->Fim = 0;//Lista vazia

    return lst;
}

int lista_vazia(Lista lst){
    if(lst->Fim == 0)
        return 1; //Lista vazia
    else
        return 0;//Lista NAO vazia
}

int lista_cheia(Lista lst){
    if(lst->Fim == max)
        return 1;//Lista cheia
    else
        return 0;//Lista NÂO cheia
}

int insere_elem(Lista lst, char n, int v, float p){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;

    lst->bebida.nome = n;//Insere Elemento
    lst->bebida.volume = v;
    lst->bebida.preco = p;
    lst->Fim++;//Avança o Fim
    return 1;
}

int remove_elem(Lista lst, char n){
    if(lst == NULL || lista_vazia(lst) == 1)
        return 0; //Falha
    int i, Aux = 0;

    //Percorrimento até achar o elem ou final de lista
    while(Aux < lst->Fim && lst->bebida[Aux].nome != n)
        Aux++;
    if(Aux == lst->Fim){//Final da lista (elem)
        return 0;//Falha
    }

    //Deslocamento à esquerda do sucessor até o final da lista
    for(i = Aux+1; i < lst->Fim; i++)
        lst->bebida[i-1] = lst->bebida[i];

    lst->Fim--;//Deslocamento do campo Fim
    return 1; //Sucesso
}

int print_lista(Lista lst){
    int x;
    printf(" -[ ");
    for(x=0; x<lst->Fim; x++){
        printf("%d ",lst->bebida[x]);
    }
    printf("]-\n");
}
