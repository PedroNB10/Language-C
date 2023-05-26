#include <stdio.h>
#include <math.h>
int main ()
{
    int i,n;
    float soma = 0,divisor,numerador = 0;
    scanf("%d",&n);
    
    for (i = 0; i < n; i++){
        divisor = pow(2,i);
        soma = soma + (numerador/divisor);
        numerador +=2;
        
    }
    
    printf("%.2f",soma);
    
    return 0;
}