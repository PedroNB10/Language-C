#include <stdio.h>

int main ()
{
    int i, vetor[12],contador;
    
    for (i = 0; i < 12; i++){
        scanf("%d",&vetor[i]);
        if(vetor[i] % 2 == 0) contador++;
    }
    
    printf("%d %d",contador,12 - contador);
    
    
    return 0;
}