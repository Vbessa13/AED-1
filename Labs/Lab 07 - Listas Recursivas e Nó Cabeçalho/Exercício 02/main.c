/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    int x,r;
    Lista ex;

    int op;


    do{
        //system("CLS || clear");
        do{
            printf(" --- LISTAS DINAMICAS ENCADEADAS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Inserir elemento\n");
            printf(" 3. Excluir elemento\n");
            printf(" 4. Imprimir lista\n");
            printf(" 5. Tamanho da lista\n");
            printf(" 6. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 6)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
                getch();
                //system("CLS || clear");
            }
        } while((op < 1) || (op > 6));

        switch(op)
        {
            case 1:
                ex = cria_lista();
                printf("Lista criada com sucesso!!\n");
                break;

            case 2:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_elem(&ex, x);
                printf("\nElemento %d inserido com sucesso!!\n",x);
                break;

            case 3:
                printf("Informe o elemento a ser removido: ");
                scanf("%d",&r);
                remove_elem(&ex, r);
                printf("\nElemento %d removido com sucesso!!\n",r);
                break;

            case 4:
                imprime_lista(ex);
                break;

            case 5:
                printf("A lista tem %d elementos\n\n", tamanho(ex));
                break;
        }
    } while(op != 6);

    return 0;
}
