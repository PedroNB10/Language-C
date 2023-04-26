#include <stdio.h>

int main ()
{
    float altura,pesoIdeal;
    char sexo;

    printf("Digite a sua altura e seu sexo(m/f): \n");
    scanf("%f %c",&altura,&sexo);

    if((sexo =='m' && altura >= 1.75)||(sexo == 'f' && altura >= 1.80)){
       
        printf("sim \n");
    }

    else{
        printf("nao \n");
    }

    return 0;
}