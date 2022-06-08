/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab_tad.h"

int main(){

    pto *p1, *p2;
    int x, y, a, b;
    float dist;

    printf("Digite o 'x' do ponto 1:\n");
    scanf("%d",&x);
    printf("Digite o 'y' do ponto 1:\n");
    scanf("%d",&y);
    printf("Digite o 'x' do ponto 2:\n");
    scanf("%d",&a);
    printf("Digite o 'y' do ponto 2:\n");
    scanf("%d",&b);

    p1 = geraponto();
    p2 = geraponto();

    if(p1 == NULL || p2 == NULL){
        printf("Nao foi possivel criar os pontos.\n");
        return -1;
    }

    if(set_pto(p1,x,y) == 0){//atribui os valores de x e y no ponto 1
        printf("\nFalha ao preencher ponto 1.\n");
        return -1;
    }

    if(set_pto(p2,a,b) == 0){//atribui os valores de x e y no ponto 2
        printf("\nFalha ao preencher ponto 2.\n");
        return -1;
    }

    dist = distancia_pto(p1,p2);

    printf("A distancia entre (%d,%d) e (%d,%d) eh: %f\n",x,y,a,b,dist);

    libera_pto(&p1);
    //printf("%p",p1);
    libera_pto(&p2);
    //printf("%p",p2);

    return 0;
}
