/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

int* aloca_inteiro(int n){
    (int *) malloc(n*sizeof(int));
}

void imprime_vet(int *x, int n){
    int i;
    for(i=0; i<n;i++){
        x[i] = 0;
    }
    for (i=0; i<n; i++){
        printf("%d\n",x[i]);
    }
}

int main(){

    int *p, n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);

    p = aloca_inteiro(n);

    imprime_vet(p,n);

    return 0;
}
