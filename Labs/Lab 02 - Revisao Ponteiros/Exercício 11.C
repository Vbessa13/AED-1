/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

void calc_vetor(int tam, double vet[tam]){
    double maior,menor;
    maior = vet[0];
    menor = vet[0];
    for(int i=0; i<tam; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }else{
            if(vet[i] < menor){
                menor = vet[i];
            }
        }
    }
    printf("O maior numero do vetor eh %lf e o menor eh %lf .\n",maior, menor);
}


int main(){

    int i;
    int n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);

    double vetor[n];

    printf("Informe os valores do vetor: ");
    for(i=0; i<n; i++){
        scanf("%lf",&vetor[i]);
    }

    printf("Os valores do vetor sao: ");
    for(i=0; i<n; i++){
        printf("%lf | ",vetor[i]);
    }
    printf("\n");
    calc_vetor(n,vetor);

    return 0;
}
