#include <stdio.h>

int main ()
{
    int num;

    printf("Digite um número inteiro:");
    scanf("%d",&num);

    if(num % 11 == 0)
    {
        printf("sim \n");
    }
    
    else{
        printf("nao \n");
    }
    
    return 0;
}