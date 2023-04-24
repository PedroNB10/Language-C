#include <stdio.h>

int main ()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int menor;

    printf("Digite os quatro numeros: \n");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    
    if(num1 < num2 && num1 < num3 && num1 < num4){
        menor = num1;
    }

    else if(num2 < num1 && num2 < num3 && num2 < num4){
        menor = num2;
    }

    else if(num3 < num1 && num3 < num2 && num3 < num4){
            menor = num3;
        }

    else{
        menor = num4;
    }
    
    printf("\nO menor numero eh %d \n",menor);
    return 0;
}