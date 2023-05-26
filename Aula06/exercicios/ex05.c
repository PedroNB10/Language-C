#include <stdio.h>
int main ()
{
    //n primeiros numeros multiplos de x
    int n,x,i,mult;
    
    scanf("%d",&n);
    scanf("%d",&x);
    
    for (i = 1; i <= n; i++){

        mult = x * i;
        printf("%d ",mult)  ;
    }
    
    return 0;
    
}