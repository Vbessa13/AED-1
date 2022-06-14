/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    char r[20];
    int v;
    float p;
    char n[20];
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
                printf("Lista criada com sucesso!!\n");
                break;

            case 2:
                printf("Informe os dados da bebida a ser inserida: \n");
                printf("Nome: ");
                scanf("%s",&n);
                printf("Volume(ml): ");
                scanf("%d",&v);
                printf("Preco: ");
                scanf("%f",&p);
                insere_elem(&ex, v,p,n);
                printf("\n %s inserido com sucesso!!\n",n);
                break;

            case 3:
                printf("Informe a bebida a ser removida: ");
                scanf("%s",&r);
                remove_elem(&ex, r);
                printf("\n %s removida com sucesso!!\n",r);
                break;

            case 4:
                imprime_lista(ex);
                break;

        }
    } while(op != 5);

    return 0;
}
