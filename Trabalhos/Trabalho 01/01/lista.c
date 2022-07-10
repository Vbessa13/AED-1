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
    if(lst == NULL || lista_cheia(lst)== 1)
        return 0; //Falha

    //Trata lista vazia ou elemento >= ultimo da lista
    if(lista_vazia(lst) == 1 || elem >= lst->no[lst->Fim-1]){
        lst->no[lst->Fim] = elem; //insere no final
    }else{
        int i, aux = 0;
        while(elem >= lst->no[aux])//Percorrimento
            aux++;
        for(i=lst->Fim; i>aux; i--)//Deslocamento
            lst->no[i] = lst->no[i-1];
        lst->no[aux] = elem;//Inclui o elemento na lista
    }
    lst->Fim++;//Avança o Fim
    return 1; //Sucesso
}

int insere_elem(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;

    lst->no[lst->Fim] = elem;//Insere Elemento
    lst->Fim++;//Avança o Fim
    return 1;
}

int remove_elem(Lista lst, int elem){
    if(lst == NULL || lista_vazia(lst) == 1)
        return 0; //Falha
    int i, Aux = 0;

    //Percorrimento até achar o elem ou final de lista
    while(Aux < lst->Fim && lst->no[Aux] != elem)
        Aux++;
    if(Aux == lst->Fim){//Final da lista (elem)
        return 0;//Falha
    }

    //Deslocamento à esquerda do sucessor até o final da lista
    for(i = Aux+1; i < lst->Fim; i++)
        lst->no[i-1] = lst->no[i];

    lst->Fim--;//Deslocamento do campo Fim
    return 1; //Sucesso
}

int print_lista(Lista lst){
    if(lista_vazia(lst) == 1){
        printf(" -[ >>LISTA VAZIA<< ]- \n");
    }else{
    int x;
    printf(" -[ ");
    for(x=0; x<lst->Fim; x++){
        printf("%d ",lst->no[x]);
    }
    printf("]-\n");
}
}

int menor_elem(Lista lst){          //Retorna o menor elemento da lista
    if (lst == NULL || lista_vazia(lst) == 1)
        return 0;
    int x, Aux = 0;
    Aux = lst->no[0];
    for (x=0;x< lst->Fim;x++){
        if(Aux > lst->no[x])
            Aux = lst->no[x];
    }
    return Aux;
}

int concatena_lista(Lista lst1, Lista lst2, Lista lst3){      ///Concatena 2 listas
    int Aux=0,Aux2=0,Aux3=0;
    //if(lst1->Fim + lst2->Fim > 20)
      //  return 0;
    lst3->Fim = lst1->Fim + lst2->Fim;
    while(Aux < lst1->Fim){               // Percorrimento até achar o  final de lst1
        lst3->no[Aux] = lst1->no[Aux];
        Aux++;
    }
    while(Aux2 < lst2->Fim){               // Percorrimento até achar o  final de lst2
        lst3->no[Aux] = lst2->no[Aux2];
        Aux2++;
        Aux++;
    }
    lst1->Fim = lst3 ->Fim;
    while(Aux3 < lst1->Fim){
        lst1->no[Aux3] = lst3->no[Aux3];
        Aux3++;
    }
    return 1;
}

int tamanho_lista(Lista lst){                   //retorna o tamanho da lista
    if (lista_vazia(lst) == 1) {
        printf("A lista tem [0] elementos\n");
        return 0;
        }
        int x,y=0;
    for(x=0; x<lst->Fim; x++)
        y++;

    return y;
}

int remove_impar(Lista lst){          //Remove todos os elementos ímpares
 if (lst == NULL || lista_vazia(lst) == 1)
        return 0;
        int i, Aux = 0;
    while (Aux < lst->Fim ){  // Percorrimento até achar o  final de lista
        if(lst->no[Aux]%2==1){
                for(i=Aux+1;i< lst->Fim;i++){
            lst->no[i-1] = lst ->no[i];}
        lst->Fim --;
        Aux--;
        }
        Aux++;}
        return 1;
}

int ordenar_lista(Lista lst) {
	if(lista_vazia(lst) == 1) {
		printf("\nLista vazia!");
		return 0;
	}
	int qtde = tamanho_lista(lst);
	Lista aux;
	int x,y;
	for(x=0;x<qtde;x++) {
		for(y=x;y<qtde;y++) {

			if(lst->no[x] > lst->no[y]) {
				aux = lst->no[x];
				lst->no[x] = lst->no[y];
				lst->no[y] = aux;
			}
		}
	}
	return lst;
}
