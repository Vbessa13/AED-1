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
    //Aloca n� cabe�alho
    Lista cab;
    cab = (Lista) malloc(sizeof(struct no));
    //Coloca lista no estado de vazia
    if(cab != NULL){//S� se a aloca��o N�O falhar
        cab->prox = NULL;
        //cab->info = 0;}//Opcional: guardar qtde
        return cab;
}
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 1;//Lista vazia
    else
        return 0;//Lista N�O vazia
}

int insere_elem(Lista *lst, int vol, float pr, char* nm){
    //aloca um novo n�
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL){//Falha: n� n�o alocado
        return 0;
    }
    //preenche os campos do novo n�
    N->volume = vol;//insere o conte�do(valor do elem)
    N->preco = pr;
    strcpy(N->nome, nm);
    N->prox = (*lst)->prox;//Aponta para o 1� n� atual da lista
    (*lst)->prox = N;//Faz o n� cabe�alho apontar para o novo n�
    //(*lst)->info++;//Opcional: incrementa qtde de n�s na lista
    return 1;
}

int remove_elem(Lista *lst, char* nm){
    if(lista_vazia(lst) == 1)
        return 0;//Falha
    Lista aux = *lst;//Ponteiro auxiliar para o n� cabe�alho
    //Percorrimento at� achar o elem ou final da lista
    while(aux->prox != NULL && strcmp(nm, aux->prox->nome)!= 0)
        aux = aux->prox;
    if(aux->prox == NULL)//Trata final de lista
        return 0;//Falha
    //Remove elemento != 1� n� da lista
    Lista aux2 = aux->prox;//Aponta n�  a ser removido
    aux->prox = aux2->prox;//Retira n� da lista
    free(aux2);//Libera memoria alocada
    //(*lst)->info--;//Opcional: Decrementa qtde de n�s da lista
    return 1;
}

void imprime_lista(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf(" -[ >>LISTA VAZIA<< ]-\n");
        return;
    }
    printf(" -[");
    aux = aux->prox;
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
    return 1;
}




