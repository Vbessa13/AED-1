/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    double vet[10];
    int i;
    for(i=0; i<10; i++){
        printf("Digite um valor 'double': ");
        scanf("%lf",&vet[i]);
    }

    printf("Os valores digitados foram: \n");
    for(i=0; i<10; i++){
        printf("%lf\n",*(vet+i));
    }

    return 0;
}
