/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define max 20

int main(){
    int x,r,tam,menor;
    Lista lst1, lst2, lst3, lst4;

    int op;


    do{
        do{
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" [1] Criar lista\n");
            printf(" [2] Inserir elemento\n");
            printf(" [3] Excluir elemento\n");
            printf(" [4] Imprimir lista\n");
            printf(" [5] Tamanho da lista\n");
            printf(" [6] Remover impares\n");
            printf(" [7] Menor elemento\n");
            printf(" [8] Concatenar listas\n");
            printf(" [9] SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 9)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while((op < 1) || (op > 9));

        switch(op){
            case 1:
                lst1 = cria_lista();
                if(lst1 == NULL){
                   printf("Nao foi possivel criar a lista.\n");
                   return -1;
                }else{
                    printf("Lista criada com sucesso!!.\n");
                }
                break;

            case 2:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_ord(lst1, x);
                printf("\nElemento %d inserido com sucesso!!\n",x);
                break;

            case 3:
                printf("Informe o elemento a ser removido: ");
                scanf("%d",&r);
                remove_ord(lst1, r);
                printf("\nElemento %d removido com sucesso!!\n",r);
                break;

            case 4:
                print_lista(lst1);
                break;

            case 5:
                tam = tamanho_lista(lst1);
                printf("A lista tem %d elementos.\n\n",tam);
                break;

            case 6:
                remove_impar(lst1);
                break;

            case 7:
                menor = menor_elem(lst1);
                printf("O menor elemento da lista eh %d.\n\n",menor);
                break;

            case 8:
                lst2 = cria_lista();
                lst3 = cria_lista();
                int i,q,e;
                printf("Quantos elementos tera a segunda lista: ");
                scanf("%d",&q);
                printf("Informe quais os elementos da segunda lista: ");
                for(i=0; i<q; i++){
                    scanf("%d",&e);
                    insere_ord(lst2,e);
                }
                concatena_lista(lst1, lst2, lst3);
                printf("-- Lista Concatenada --\n\n");
                print_lista(lst1);
                break;

        }
    } while(op != 9);

    return 0;
}
