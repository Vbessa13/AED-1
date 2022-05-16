/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    printf("Digite um numero inteiro: ");
    scanf("%d",&N);
    int  i,j, c = 0;
    for (i=1; i <= N; i++){
        for(j=1; j <= i; j++){
        c++;
        printf(" %d",c);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
