/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x,y;
}ponto;

void inc_dir(ponto p,char a){

    switch(a){
    case 'l':
        p.x = p.x + 1;
        break;
    case 'o':
        p.x = p.x - 1;
        break;
    case 'n':
        p.y = p.y + 1;
        break;
    case 's':
        p.y = p.y - 1;
        break;
    }

    printf("(%d,%d)",p.x,p.y);
}

int main(){

    char n;

    ponto PTO;
    printf("<< MENU >>\n");
    printf("[n] - Norte\n[s] - Sul\n[l] - Leste\n[o] - Oeste\n");
    printf("Informe a direcao: ");
    scanf("%c",&n);

    printf("Informe o valor de x: ");
    scanf("%d",&PTO.x);
    int n1 = PTO.x;
    printf("Informe o valor de y: ");
    scanf("%d",&PTO.y);
    int n2 = PTO.y;

    printf("Inicio:(%d,%d)\nDirecao: [%c]\nFim: " ,n1,n2,n),inc_dir(PTO,n);
    printf("\n");

    return 0;
}
