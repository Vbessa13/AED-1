#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x,y;
    float distancia;

    printf("<< Distancia >>\n");
    printf("Entre com a coordenada x: ");
    scanf("%d",&x);
    printf("Entre com a coordenada y: ");
    scanf("%d",&y);

    distancia = sqrt(((0-x)*(0-x))+((0-y)*(0-y)));

    printf("A distancia entre os pontos (%d,%d) e (0,0) eh : %f\n",x,y,distancia);

    return 0;
}
