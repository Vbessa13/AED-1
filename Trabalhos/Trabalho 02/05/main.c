/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
  int x,r;
    Fila ex;
    int op;
    do{
        do{
            printf(" --- FILA ESTATICAS SEQUENCIAL --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar Fila\n");
            printf(" 2. Inserir elemento\n");
            printf(" 3. Excluir elemento\n");
            printf(" 4. Imprimir Fila\n");
            printf(" 5. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 5)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
                getch();
            }
        } while((op < 1) || (op > 5));

        switch(op)
        {
            case 1:
                ex = cria_fila();
                if(ex == NULL){
                   printf("Nao foi possivel criar a fila.\n");
                   return -1;
                }
                else
                    printf("\nLista Criada com sucesso\n");
                break;

            case 2:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d",&x);
                insere_fim(ex, x);
                printf("\nElemento %d inserido com sucesso!!\n",x);
                break;

            case 3:
                if(remove_ini(ex,&r) == 1)
                    printf("\nElemento %d removido com sucesso!!\n",r);
                else
                    printf("\nfalha\n");
                break;

            case 4:
                print_fila(ex);
                break;

        }
    } while(op != 5);

    return 0;
}
