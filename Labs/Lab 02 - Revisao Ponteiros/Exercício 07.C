/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x,y;
};

int main(){
    int i, n;
    int *vetor;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);

    struct ponto pto[n];

    vetor = (int *) malloc(n*sizeof(struct ponto));

    for(i=0; i<n; i++){
        printf("Entre com a coordenada x do ponto %d: ",i+1);
        scanf("%d",&pto[i].x);
        printf("Entre com a coordenada y do ponto %d: ",i+1);
        scanf("%d",&pto[i].y);
    }

    printf("Pontos digitados: ");
    for(i=0; i<n; i++){
        printf("(%d,%d) ",pto[i].x, pto[i].y);
    }

    return 0;
}
