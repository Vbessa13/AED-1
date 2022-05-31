/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab_tad.h"
#include <math.h>


struct Ponto{
    int x;
    int y;

};

pto* geraponto(){
    pto* p1;

    p1 = (pto *) malloc(sizeof(pto));
    return p1;

}

int set_pto(pto* p1, int A, int B){
    if(p1 == NULL){
        return 0;//Falha
    }

    p1->x = A;
    p1->y = B;
    return 1;//Sucesso

}

int get_pto(pto* p1, int *A, int *B){
    if(p1 == NULL){
        return 0;//Falha
    }

    *A = p1->x;
    *B = p1->y;
    return 1;//Sucesso

}

void libera_pto(pto**p1){
    free(*p1); //Libera a memória
    *p1 = NULL;//Limpa o ponteiro para o ponto

}

float distancia_pto(pto *p1, pto *p2){
    float distancia;

    distancia = sqrt(((p2->x - p1->x)*(p2->x - p1->x))+((p2->y - p1->y)*(p2->y - p2->y)));

    return distancia;
}
