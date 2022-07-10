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
    int mr;
    Lista lst1, lst2, lst3, lst4;

    int op;


    do{
        do{
            printf(" --- LISTA DINAMICA ENCADEADA CIRCULAR --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" [1] Criar lista\n");
            printf(" [2] Inserir no final\n");
            printf(" [3] Remover no inicio\n");
            printf(" [4] Imprimir lista\n");
            printf(" [5] Tamanho da lista\n");
            printf(" [6] Remover pares\n");
            printf(" [7] Maior elemento\n");
            printf(" [8] Inserir no inicio\n");
            printf(" [9] Inserir em posicao\n");
            printf(" [10] Remover em posicao\n");
            printf(" [11] SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 11)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while((op < 1) || (op > 11));

        switch(op){
            case 1:
                lst1 = cria_lista();
                printf("Lista criada com sucesso!!.\n");
                break;

            case 2:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_final(&lst1, x);
                printf("\nElemento %d inserido com sucesso!!\n",x);
                break;

            case 3:
                remove_inicio(&lst1, &r);
                printf("\nElemento %d removido com sucesso!!\n",r);
                break;

            case 4:
                print_lista(lst1);
                break;

            case 5:
                tamanho_lista(lst1);
                break;

            case 6:
                remove_par(&lst1);
                break;

            case 7:
                mr = maior(lst1);
                printf("O maior elemento da lista eh %d .\n",mr);
                break;

            case 8:

                break;

        }
    } while(op != 11);

    return 0;
}
