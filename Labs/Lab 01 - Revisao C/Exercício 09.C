#include <stdio.h>
#include <stdlib.h>

void maiusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0';
}

int main(){

  printf("<< Vetor de Char >>\n");

  char vetor[10];
  char vet[10];

  printf("Digite um nome: ");
  scanf("%s",&vetor);

  maiusculo(vetor,vet);

  printf("O nome digitado eh: %s",vet);

    return 0;
}
