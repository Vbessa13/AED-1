/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct no * Fila;

Fila cria_fila();
int fila_vazia(Fila f);
int insere_fim(Fila *f, int elem);
int remove_ini(Fila *f, int *elem);
void print_fila(Fila f);
int le_final(Fila *f);

#endif // FILA_H_INCLUDED
