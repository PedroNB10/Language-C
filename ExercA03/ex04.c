#include <stdio.h>
#include <math.h>


int main () 
{
    float num;
    float quadrado;
    float cubo;
    


    printf("Digite um número real:");
    scanf("%f",&num);

    quadrado = pow(num,2);
    cubo = pow(num,3);
    
    printf("O quadrado do número %f: %f \n",num,quadrado);
    printf("O cubo do número %f: %f \n ",num,cubo);
    return 0;


}