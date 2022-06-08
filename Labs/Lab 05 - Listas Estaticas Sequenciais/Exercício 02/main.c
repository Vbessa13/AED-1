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
    int x,r;
    Lista ex;

    int op;


    do{
        //system("CLS || clear");
        do{
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Inserir elemento\n");
            printf(" 3. Excluir elemento\n");
            printf(" 4. Imprimir lista\n");
            printf(" 5. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 5)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
                getch();
                //system("CLS || clear");
            }
        } while((op < 1) || (op > 5));

        switch(op)
        {
            case 1:
                ex = cria_lista();
                if(ex == NULL){
                   printf("Nao foi possivel criar a lista.\n");
                   return -1;
                }
                break;

            case 2:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_ord(ex, x);
                printf("\nElemento %d inserido com sucesso!!\n",x);
                break;

            case 3:
                printf("Informe o elemento a ser removido: ");
                scanf("%d",&r);
                remove_ord(ex, r);
                printf("\nElemento %d removido com sucesso!!\n",r);
                break;

            case 4:
                print_lista(ex);
                break;

        }
    } while(op != 5);

    return 0;
}
