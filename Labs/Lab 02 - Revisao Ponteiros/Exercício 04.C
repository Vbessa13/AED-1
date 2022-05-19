#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int i;

    for(i=0;i<10;i++){
        printf("Digite um numero inteiro: ");
        scanf("%d",&vetor[i]);
    }

    printf("Os numeros digitados foram: \n");
    for(i=9; i>=0; i--){
        printf("%d\n",*(vetor + i));
    }










    return 0;
}
