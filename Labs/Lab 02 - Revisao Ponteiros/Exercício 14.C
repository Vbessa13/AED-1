/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

double *to_double(int tam, int vet[tam],double vetor[tam]){

    int i;

    for(i=0; i<tam; i++){
        vetor[i] = vet[i];
    }
    return vetor;
}


int main(){
    int n, i;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);

    int vet[n];
    double vetor[n];

    printf("Informe os valores p/ o vetor de inteiros: \n");
    for(i=0; i<n; i++){
        scanf("%d",&vet[i]);
    }

    printf("\n<< VETOR DE INTEIROS >>\n");
    for(i=0; i<n; i++){
        printf("%d | ",vet[i]);
    }
    to_double(n,vet,vetor);

    printf("\n\n<< VETOR DE DOUBLES >>\n");
    for(i=0; i<n; i++){
        printf("%lf | ",vetor[i]);
    }
    printf("\n");

    return 0;


}
