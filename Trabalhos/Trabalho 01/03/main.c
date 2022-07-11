/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    int x,r,tam1, tam2;
    Lista lst1,lst2,lst3,lst4,lst5;
    float m;

    int op;


    do{

        do{
            printf(" --- LISTAS DINAMICAS ENCADEADAS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" [1] - Criar lista\n");
            printf(" [2] - Inserir elemento\n");
            printf(" [3] - Excluir elemento\n");
            printf(" [4] - Imprimir lista\n");
            printf(" [5] - Tamanho\n");
            printf(" [6] - Media\n");
            printf(" [7] - Criar 2a lista\n");
            printf(" [8] - Inserir elemento (2a lista)\n");
            printf(" [9] - Excluir elemento (2a lista)\n");
            printf(" [10] - Iguais\n");
            printf(" [11] - Intercalar\n");
            printf(" [12] - Inverter\n");
            printf(" [13] - Retorna Impares\n");
            printf(" [14] - SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 14)) {

                printf("Opcao Invalida! Tente novamente... \n\n");

            }
        } while((op < 1) || (op > 14));

        switch(op)
        {
            case 1:
                lst1 = cria_lista();
                lst2 = cria_lista();
                lst3 = cria_lista();
                lst4 = cria_lista();
                lst5 = cria_lista();
                printf("Lista criada com sucesso!!\n\n");
                break;

            case 2:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_ord(&lst1, x);
                printf("\nElemento %d inserido com sucesso!!\n\n",x);
                break;

            case 3:
                printf("Informe o elemento a ser removido: ");
                scanf("%d",&r);
                remove_ord(&lst1, r);
                printf("\nElemento %d removido com sucesso!!\n\n",r);
                break;

            case 4:
                printf("Lista 1:\n");
                imprime_lista(lst1);
                printf("Lista 2:\n");
                imprime_lista(lst2);
                printf("Lista 3(intercalada):\n");
                imprime_lista(lst3);
                printf("Lista 4(impares da lista 1):\n");
                imprime_lista(lst4);
                printf("Lista 5(lista 1 invertida):\n");
                imprime_lista(lst5);
                break;

            case 5:
                tam1 = tamanho_lista(lst1);
                printf("A lista 1 tem %d elementos.\n\n",tam1);
                tam2 = tamanho_lista(lst2);
                printf("A lista 2 tem %d elementos.\n\n",tam2);
                break;

            case 6:
                m = media(lst1);
                printf("A media dos elementos da lista eh: %f\n\n",m);
                break;

            case 7:
                //lst2 = cria_lista;
                printf("Lista criada com sucesso!!\n\n");
                break;

            case 8:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_ord(&lst2, x);
                printf("\nElemento %d inserido com sucesso!!\n\n",x);
                break;

            case 9:
                printf("Informe o elemento a ser removido: ");
                scanf("%d",&r);
                remove_ord(&lst2, r);
                printf("\nElemento %d removido com sucesso!!\n\n",r);
                break;

            case 10:
                igual(lst1,lst2);
                break;

            case 11:
                //lst3 = cria_lista();
                intercala_lista(lst1,lst2,&lst3);
                imprime_lista(lst3);
                break;

            case 12:
                //inverter
                inverte_lista(&lst1,&lst5);
                imprime_lista(lst5);
                break;

            case 13:
                //retorna impares
                retorna_impares(&lst1, &lst4);
                imprime_lista(lst4);
                break;

        }
    } while(op != 14);

    return 0;
}
