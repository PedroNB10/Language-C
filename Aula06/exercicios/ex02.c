#include <stdio.h>

int main ()
{
    int n;

    do{
    printf("Digite um número inteiro positivo N:");
    scanf("%d",&n);
    }while(n < 0);

    for (int i = 0; n >= i; i ++ )

    printf("%d ",i);

    return 0;
}