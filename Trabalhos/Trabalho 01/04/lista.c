/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no{
    int info;
    struct no * prox;
};

Lista cria_lista(){
    //Aloca nó cabeçalho
    Lista cab;
    cab = (Lista)malloc(sizeof(struct no));
    //Coloca lista no estado de vazia
    if(cab != NULL){ //Só se alocação NÃO falhar
        cab->prox = NULL;
        cab->info = 0; //Opcional: guardar quantidade
    }
    return cab;//Se alocação falhar, retorna NULL
}

int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 1;//Lista vazia
    else
        return 0;//Lista NÃO vazia
}

int insere_ord (Lista *lst, int elem) {
    //Aloca um novo nó
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;//Falha: nó nao alocado
    N->info = elem;//Insere o conteúdo (valor do elem)
    //Percorrimento da lista
    Lista aux = *lst;//Faz aux apontar para o nó cabeçalho
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;//Avança
    //Insere o novo nó na lista
    N->prox = aux->prox;
    aux->prox = N;
    (*lst)->info++;//Opcional: incrementa quantidade de nós na lista
    return 1;
}

int remove_ord (Lista *lst, int elem) {
        if (lista_vazia(*lst) == 1)
        return 0;//Falha
    Lista aux = *lst;//Ponteiro auxiliar para nó cabeçalho
    //Percorrimento até final de lista, achar elem ou nó maior
    while (aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;
    if (aux->prox == NULL || aux->prox->info > elem)
        return 0;//Falha
    //Remove elemento da lista
    Lista aux2 = aux->prox;//Aponta nó  a ser removido
    aux->prox = aux2->prox;//Retira nó da lista
    free(aux2);//Libera memória alocada
    (*lst)->info--;//Opcional: Decrementa quantidade de nós na lista
    return 1;
}

void imprime_lista(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf(" -[ ]-\n");
        return 0;
    }
    printf(" -[ %d |",aux->info);
    aux = aux->prox;
    while(aux != NULL){
        printf(" %d",aux->info);
        aux = aux->prox;
    }
    printf(" ]-\n");
}

int tamanho_lista(Lista lst){
    if(lista_vazia(lst)==1){
        printf(" -[ >>> LISTA VAZIA <<< ]- \n");
        return 0;
    }
    return lst->info;
}

int retorna_impares(Lista *lst, Lista *lst2){
        if (lista_vazia(*lst) == 1)
        return 0;
    int x;
    Lista aux;
    for (aux = *lst; aux != NULL; aux = aux->prox){
        if(aux->info%2 == 1){
          x = aux->info;
          insere_ord(lst2, x);
        }
    }
    return 1;
}

int igual(Lista p, Lista q){
     if (lista_vazia(p) == 1 && lista_vazia(q) == 1){
        printf("Listas Vazias iguais\n");
        return 0;
     }
     if (lista_vazia(p) == 0 &&  lista_vazia(q) == 1 || lista_vazia(p) == 1 &&  lista_vazia(q) == 0 ){
        printf("Uma lista eh vazia e a outra n \n");
        return 0;
     }
     Lista auxp = p;
     Lista auxq = q;
     while(auxp->prox != NULL && auxq->prox != NULL){
        if(auxp->info != auxq->info){
            printf("listas diferentes\n");
            return 0;
        }
        auxp = auxp->prox;
        auxq = auxq->prox;
     }
     if(auxp->prox == NULL && auxq->prox == NULL){
     printf("Listas iguais \n");
     return 0;}
     else{
        printf("Listas com tamanhos diferentes nao sao iguais\n");
        return 0;
     }
}

int intercala_lista(Lista p, Lista q, Lista *r){
    Lista aux3 = (*r);
    Lista aux1 = p;
    Lista aux2 = q;
    Lista novo;
    aux1 = aux1->prox;
    aux2 = aux2->prox;
    while(aux1!=NULL && aux2 != NULL){
        novo = (Lista) malloc(sizeof(struct no));
        if (novo == NULL) { return 0; }
        if(aux1->info <= aux2->info){
            novo->info = aux1->info;
            aux1=aux1->prox;
        }else{
            novo->info = aux2->info;
            aux2=aux2->prox;
        }
        aux3->prox=novo;
        aux3 = novo;
        (*r)->info++;

    }
    while(aux1!=NULL){
        novo = (Lista) malloc(sizeof(struct no));
        if (novo == NULL) { return 0; }
        novo->info = aux1->info;
        aux1 = aux1->prox;
        aux3->prox = novo;
        aux3 = novo;
        (*r)->info++;
    }
    while(aux2!=NULL){
        novo = (Lista) malloc(sizeof(struct no));
        if (novo == NULL) { return 0; }
        novo->info = aux2->info;
        aux2 = aux2->prox;
        aux3->prox = novo;
        aux3 = novo;
        (*r)->info++;
    }
    if(aux3 != NULL)
        aux3->prox = NULL;
    return 1;
}

float media(Lista lst){
    Lista aux = lst;
    if(lista_vazia(lst) == 1){
        printf("Lista vazia\n\n");
        return 0;
    }
    float soma = 0;
    while(aux->prox != NULL){
        aux = aux->prox;
        soma = soma + aux->info;
    }
    float t = tamanho_lista(lst);
    float med;
    med = soma/t;
    return med;
}

int insere_elem(Lista *lst, int elem){
    //Aloca um novo nó
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)
        return 0;//Falha: nó nao alocado
    //preenche os campos do novo nó
    N->info = elem;//Insere o conteúdo (valor do elem)
    N->prox = (*lst)->prox;//Aponta para o 1º nó atual da lista
    (*lst)->prox = N;//Faz o nó cabeçalho apontar para o novo nó
    (*lst)->info++;//opcional: Incrementar a quantidade de nós da lista
    return 1;
}

int inverte_lista(Lista *lst, Lista *lst2){
    if(lista_vazia(*lst) == 1)
        return 0;
    int x;
    Lista aux;
    for(aux = (*lst)->prox; aux != NULL; aux = aux->prox){
        x = aux->info;
        insere_elem(lst2, x);
    }
    return 1;
}
