#include <stdio.h>

int main ()
{
    int num1;
    int num2;
    int maior;

    printf("Digite o primeiro e segundo numero: \n");
    scanf("%d%d",&num1,&num2);
    if(num1 > num2){
        maior = num1;
    }
    else{
        maior = num2;
    }
    printf("\nO maior numero eh %d \n",maior);
    return 0;
}