/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/


#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define max 20

struct lista {
    int no[max];
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

int insere_ord(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;//Falha

    //Trata lista vazia ou elemento >= ultimo da lista
    if(lista_vazia(lst)==1 || elem >= lst->no[lst->Fim-1]){
        lst->no[lst->Fim]=elem;//Insere no final
    }
    else{
        int i, aux = 0;
        while(elem >= lst->no[aux])//Percorrimento
            aux++;
        for(i=lst->Fim; i>aux; i--)//Deslocamento
            lst->no[i] = lst->no[i-1];
        lst->no[aux] = elem;//Inlcui o elemento na lista
    }
    lst->Fim++;//Avança o Fim
    return 1;
}

int remove_ord(Lista lst, int elem){
    if(lst == NULL || lista_vazia(lst) == 1 || elem < lst->no[0] || elem > lst->no[lst->Fim-1])
        return 0; //Falha
    int i, Aux = 0;

    //Percorrimento até achar o elem ou nó maior, ou final da lista
    while(Aux < lst->Fim && lst->no[Aux] < elem)
        Aux++;
    if(Aux == lst->Fim || lst->no[Aux] > elem)//Nao existe o elemento
        return 0;//Falha

    //Deslocamento à esquerda do sucessor até o final da lista
    for(i = Aux+1; i < lst->Fim; i++)
        lst->no[i-1] = lst->no[i];

    lst->Fim--;//Deslocamento do campo Fim
    return 1; //Sucesso
}

int print_lista(Lista lst){
    int x;
    printf(" -[ ");
    for(x=0; x<lst->Fim; x++){
        printf("%d ",lst->no[x]);
    }
    printf("]-\n");
}
