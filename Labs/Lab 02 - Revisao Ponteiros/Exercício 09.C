/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x,y;
}ponto;

void multiplica(ponto p,int a){
    p.x = p.x * a;
    p.y = p.y * a;

    printf("(%d,%d)",p.x,p.y);
}

int main(){

    int n;

    ponto PTO;

    printf("Informe o valor constante: ");
    scanf("%d",&n);

    printf("Informe o valor de x: ");
    scanf("%d",&PTO.x);
    int n1 = PTO.x;
    printf("Informe o valor de y: ");
    scanf("%d",&PTO.y);
    int n2 = PTO.y;

    printf("Resultado: (%d,%d) * %d = " ,n1,n2,n),multiplica(PTO,n);
    printf("\n");

    return 0;
}
