/** criador: Vitor Santini  Bessa
 *  matricula: 11821BCC010
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 40;
    int *p;
    p = &a;

    //Letra A
    printf("O endereco de 'a' eh: %d\n",&a);
    printf("O endereco de 'a' eh: %d\n",p);


    //Letra B
    printf("Digite um novo valor para 'a': \n");
    scanf("%d",p);

    printf("O valor de 'a' eh: %d\n",*p);

    return 0;
}
