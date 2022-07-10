/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    int x,r;
    int mr,rt;
    float md;
    Lista lst1, lst2, lst3, lst4;

    int op;


    do{
        do{
            printf(" --- LISTA DINAMICA DUPLAMENTE ENCADEADA --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" [1] Criar lista\n");
            printf(" [2] Inserir elemento\n");
            printf(" [3] Remover elemento\n");
            printf(" [4] Imprimir lista\n");
            printf(" [5] Tamanho da lista\n");
            printf(" [6] Media\n");
            printf(" [7] Iguais\n");
            printf(" [8] Remover todos\n");
            printf(" [9] Remover maior\n");
            printf(" [10] Multiplos de 3\n");
            printf(" [11] Inserir elemento(Lista2)\n");
            printf(" [12] Remover elemento(Lista2)\n");
            printf(" [13] SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 13)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while((op < 1) || (op > 13));

        switch(op){
            case 1:
                lst1 = cria_lista();
                lst2 = cria_lista();
                printf("Lista criada com sucesso!!.\n");
                break;

            case 2:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_elemento(&lst1, x);
                printf("\nElemento %d inserido com sucesso!!\n",x);
                break;

            case 3:
                printf("Informe o elemento a ser removido: ");
                scanf("%d",&r);
                remove_elemento(&lst1, r);
                printf("\nElemento %d removido com sucesso!!\n",r);
                break;

            case 4:
                imprime_lista(lst1);
                imprime_lista(lst2);
                break;

            case 5:
                tamanho(lst1);
                break;

            case 6:
                md = media(lst1);
                printf("A media da lista eh: %.2f \n",md);
                break;

            case 7:
                igual(lst1,lst2);
                break;

            case 8:
                printf("Informe o elemento que deseja retirar da lista: \n");
                scanf("%d",&rt);
                remove_todos(&lst1,rt);
                printf("Todos os elementos iguais a %d foram removidos!!\n",rt);
                break;

            case 9:
                remove_maior(&lst1);
                printf("Maior elemento removido com sucesso! \n");
                break;

            case 10:
                multiplo(&lst1,&lst2);
                printf("Lista 1: \n");
                imprime_lista(lst1);
                printf("Lista 2(Multiplos de 3 da lista 1) : \n");
                imprime_lista(lst2);
                break;

            case 11:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_elemento(&lst2, x);
                printf("\nElemento %d inserido com sucesso!!\n",x);
                break;

            case 12:
                printf("Informe o elemento a ser removido: ");
                scanf("%d",&r);
                remove_elemento(&lst2, r);
                printf("\nElemento %d removido com sucesso!!\n",r);
                break;
        }
    } while(op != 13);

    return 0;
}
