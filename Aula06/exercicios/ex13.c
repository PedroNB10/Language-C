#include <stdio.h>

int main ()
{
    int i, n, sinal = -1;
    float soma = 0;
    scanf("%d",&n);
    for (i = 1; i <= n; i ++){
     soma = soma + 1.0/(i*sinal);
     sinal = -sinal;
        
    }
    printf("%.2f",soma);
    
    return 0;
}