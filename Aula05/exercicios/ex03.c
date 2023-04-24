#include <stdio.h>
#include <math.h>

int main ()
{
    int num;
 

    printf("Digite um numero inteiro:");
    scanf("%d",&num);

    num = (float) num;

    if(num>0){
         num  = sqrt(num);
    }

    else if(num<0){
         num  = pow(num,2);
    }

    num = (int) num;

    printf("Resultado:%d\n",num);

    return 0;
}