/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vetor;
    int n, i;
    int somapar = 0,somaimpar = 0;

    printf("Informe a quantidade de numeros: ");
    scanf("%d",&n);

    vetor = (int *) malloc(n*sizeof(int));

    for (i = 0; i < n; i++){
        printf("Informe o %do numero: ",i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<n; i++){
        if(vetor[i]%2 == 0){
            somapar = somapar + 1;
        }else{
            if(vetor[i]%2 == 1){
                somaimpar = somaimpar + 1;
            }
        }
    }

    printf("\nNumeros Digitados: \n");
    for (i = 0; i < n; i++){
        printf("Numero %d: %d\n",i+1, vetor[i]);
    }

    printf("Sao pares: %d dos %d inteiros lidos.\n",somapar,n);
    printf("Sao impares: %d dos %d inteiros lidos.\n",somaimpar,n);

    free(vetor);
    return 0;

    return 0;
}
