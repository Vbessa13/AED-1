/**
Autor:Vitor Santini Bessa
Matricula: 11821BCC010 - UFU
*/

#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha * Pilha;

Pilha cria_pilha ();
int pilha_vazia (Pilha p);
int pilha_cheia (Pilha p);
int push (Pilha p, int elem);
int pop (Pilha p, int *elem);
int le_topo (Pilha p, int *elem);
int imprime(Pilha p);
int dec_to_bin(int elem);
int dec_to_oct(int elem);
int dec_to_hexa(int elem);


#endif // PILHA_H_INCLUDED
