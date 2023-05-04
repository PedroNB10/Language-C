#include <stdio.h>

int main ()
{
    int n,i;

    printf("Digite um número inteiro positivo N:");
    scanf("%d",&n);

    if(n >= 1){
        for(i = n; i >= 1; i--){
            
                printf("%d ",i);
            }
    }

    else{
            for(i = 1; i >= n; i--){
                printf("%d ",i);
            }
    }

    
        printf("\n");

    return 0;
}
