/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float j1,j2,j3;
    float premio,somabol,parte;
    printf("<< Loteria >>\n");
    printf("Bolao jogador 1 R$: ");
    scanf("%f",&j1);
    printf("Bolao jogador 2 R$: ");
    scanf("%f",&j2);
    printf("Bolao jogador 3 R$: ");
    scanf("%f",&j3);
    printf("Informe o valor do premio: ");
    scanf("%f",&premio);

    somabol = j1+j2+j3;

    parte = premio/somabol;

    printf("Jogador 1 recebera R$: %f",j1*parte);
    printf("\nJogador 2 recebera R$: %f",j2*parte);
    printf("\nJogador 3 recebera R$: %f",j3*parte);

    return 0;
}
