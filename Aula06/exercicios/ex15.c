#include <stdio.h>

int main ()
{
    int i,n,sinal = 1;
    float soma = 0, numerador = 1;
    scanf("%d",&n);
    for (i=1; i <= n; i++){
        if(i%2 != 0 && i != 1) sinal = -sinal;
        soma = soma + sinal*numerador/i;
        numerador+=2;
        
    }
    printf("%.2f",soma);
    return 0;
}