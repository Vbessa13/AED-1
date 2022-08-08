/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#ifndef FILAESTSEQ_H_INCLUDED
#define FILAESTSEQ_H_INCLUDED

typedef struct fila * Fila;

Fila cria_fila();
int fila_vazia(Fila f);
int fila_cheia(Fila f);
int insere_fim(Fila f, int elem);
int remove_ini(Fila f, int *elem);
void print_fila(Fila f);


#endif // FILAESTSEQ_H_INCLUDED
