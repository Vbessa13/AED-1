/**
Criado por: Vitor Santini Bessa
Matrícula: 11821BCC010
Universidade: UFU
*/

#ifndef LAB_TAD_H_INCLUDED
#define LAB_TAD_H_INCLUDED

typedef struct Ponto pto; //Define a variavel 'pto' como sendo do tipo 'struct Ponto'

pto* geraponto();/**

Entrada:      nenhuma
Pré-condição: nenhuma
Processo:     criar uma struct ponto com valores inteiros para coordenadas x e y
Saída:        endereço de um struct criado
Pós-condição: nenhuma */

int set_pto(pto* p1, int A, int B);/**

Entrada:      Endereço de um struct ponto(p1) e 2 numeros inteiros
Pré-condição: struct deve ser valida e os numeros inteiros
Processo:     atribuir ás coordenadas x e y do struct ponto os valores de A e B
Saída:        1(sucesso) ou 0(falha)
Pós-condição: struct ponto com valores alterados */

int get_pto(pto* p1, int *A, int *B);/**

Entrada:      endereço de um struct ponto e endereço de 2 inteiros
Pré-condição: struct ser valido
Processo:     atribuir ao conteudo de A o valor da coordenada x e ao conteudo de B o valor de y
Saída:        1(sucesso) ou 0(falha)
Pós-condição: os inteiros com os valores das coordenadas x e y do ponto */

void libera_pto(pto**p1);/**

Entrada:      endereço do endereço de um ponto
Pré-condição: nenhuma
Processo:     liberar a memória usada pelo struct ponto e limpar seu endereço
Saída:        nenhuma
Pós-condição: struct ponto liberado */

float distancia_pto(pto *p1, pto *p2);/**

Entrada:      endereço de 2 struct ponto
Pré-condição: os struct serem validos
Processo:     calcula a distancia entre os pontos de coordenadas x e y através da fórmula
Saída:        numero racional com o valor da distancia
Pós-condição: numero racional com valor alterado */

#endif // LAB_TAD_H_INCLUDED
