#include <stdlib.h>
#include <stdio.h>

int main(){
  int n;
  double fat = 1;

  printf("<< Fatorial >>\n");

  for (n = 1; n <= 15; n++){
    fat = fat * n;
    if(n >= 11){
    printf("%d! = %.0lf\n", n , fat);
  }
  }
  return 0;
}
