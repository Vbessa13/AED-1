/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vetor;
    int n = 5, i;

    vetor = (int *) malloc(n*sizeof(int));

    for (i = 0; i < n; i++){
        printf("Informe o %do numero: ",i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros Digitados: \n");
    for (i = 0; i < n; i++){
        printf("Numero %d: %d\n",i+1, vetor[i]);
    }

    free(vetor);
    return 0;
}
