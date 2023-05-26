#include <stdio.h>

int main ()
{
    int n,i,impares=1,soma=0;
    
    do{
            scanf("%d",&n);
           
            
    }while( n < 0);

    for (i=0; i < n; i++){
        soma = soma + impares;
        impares = impares +2;
    }
    
    printf("%d",soma);

    return 0;
}