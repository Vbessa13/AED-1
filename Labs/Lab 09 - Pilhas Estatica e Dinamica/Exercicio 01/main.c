/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    int x,r,t;
    Pilha p1;
    int op;


    do{
        do{
            printf(" --- PILHA ESTATICA SEQUENCIAL --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar pilha\n");
            printf(" 2. Empilhar elemento\n");
            printf(" 3. Desempilhar elemento\n");
            printf(" 4. Imprimir pilha\n");
            printf(" 5. Ler elemento do topo da pilha\n");
            printf(" 6. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 6)) {

                printf("\n\n Opcao Invalida! Tente novamente...");
                getch();
            }
        } while((op < 1) || (op > 6));

        switch(op)
        {
            case 1:
                p1 = cria_pilha();
                printf("Pilha criada com sucesso!!\n\n");
                break;

            case 2:
                printf("Informe o elemento a ser empilhado: ");
                scanf("%d",&x);
                push(p1,x);
                printf("\nElemento %d empilhado com sucesso!!\n",x);
                break;

            case 3:
                pop(p1,&r);
                printf("\nElemento %d desempilhado com sucesso!!\n",r);
                break;

            case 4:
                imprime_pilha(p1);
                break;

            case 5:
                le_topo(p1, &t);
                printf("O elemento do topo da pilha eh %d \n",t);
                break;
        }
    } while(op != 6);

    return 0;
}
