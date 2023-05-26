#include <stdio.h>
// 1 - 2, 3 - 4, 5 - 6, 7 -8, n - (n + 1)


int main (){
    int i,n,sinal = 1,soma = 0;
    scanf("%d",&n);
    for (i = 1; i <= n; i ++){
        soma = soma + sinal* i ;
        sinal = sinal *-1;
    }
    printf("%d",soma);
    
    return 0;
}