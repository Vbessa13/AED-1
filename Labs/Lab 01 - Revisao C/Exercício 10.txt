#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz [6][6];
    int i,j,num = 00;

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            num = num + 01;
            matriz[i][j] = num;
        }
    }

    printf("<< Matriz normal >>\n");

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf(" %.2d |",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n<< Primeira Impressao >>\n");

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(i < j){
            printf(" %.2d |",matriz[i][j]);
        }else{
            printf("     ");
        }
        }
        printf("\n");
    }

    printf("\n<< Segunda Impressao >>\n");

    int n = 4;
    for(i=0; i<6; i++){
        for(j=0; j<=n; j++){
            printf(" %.2d |",matriz[i][j]);
        }
        n--;
        printf("\n");
    }

    printf("\n<< Terceira Impressao >>\n");

    int p = 4;
    for(i=0; i<6; i++){
        for(j=0; j<=p; j++){
            if(i != j && i < j){
            printf(" %.2d |",matriz[i][j]);
        }else{
        printf("     ");
        }
        }
        p--;
        printf("\n");
    }

    printf("\n<< Quarta Impressao >>\n");

    int x = 4;
    for(i=0; i<6; i++){
        for(j=0; j<=x; j++){
            if(i > j){
            printf(" %.2d |",matriz[i][j]);
        }
        }
        x--;
        printf("\n");
    }

    printf("\n<< Quinta Impressao >>\n");

    printf("\n<< Sexta Impressao >>\n");

    printf("\n<< Setima Impressao >>\n");

    int t = 4;
    for(i=0; i<6; i++){
        for(j=0; j<=t; j++){
            if(i != j){
            printf(" %.2d |",matriz[i][j]);
        }else{
        printf("     ");
        }
        }
        t--;
        printf("\n");
    }

    printf("\n<< Oitava Impressao >>\n");

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if((i > j) && (i+j != 5)){
            printf(" %.2d |",matriz[i][j]);
        }else{
        printf("     ");
        }
        }
        printf("\n");

    }
    return 0;
}
