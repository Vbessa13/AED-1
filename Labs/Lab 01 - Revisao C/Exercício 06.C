#include <stdio.h>
#include <stdlib.h>


int main(){
    int fat = 1, n = 10;

    printf("<< Fatorial >>\n");

    for(int i = 1; i <= n; i++){
        fat = fat * i;
        printf("%d! = %d\n",i,fat);
    }
    return 0;
}
