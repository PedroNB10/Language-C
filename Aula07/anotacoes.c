#include <stdio.h>
int main ()

{
    int i,soma = 0;
    
    for(i=2; i <= 100; i+=2){

      printf("%d ",i);
      soma = soma + i;

    }

      printf("\n SOMA: %d",soma);

    return 0;
}