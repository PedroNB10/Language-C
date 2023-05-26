#include <stdio.h>

int main ()
{
    int n,i,impar =1;
    scanf("%d",&n);
    
    for (i=0; i < n; i++){
       
        printf("%d ",impar);
        impar = impar +2;
        
    }
    return 0;
}