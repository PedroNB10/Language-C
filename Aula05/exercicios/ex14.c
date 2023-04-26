#include <stdio.h>

int main ()
{
    float altura,pesoIdeal;
    char sexo;

    printf("Digite a sua altura e seu sexo(m/f): \n");
    scanf("%f %c",&altura,&sexo);

    if(sexo =='m'){
        pesoIdeal = (72.7 * altura) - 58;
        printf("Peso ideal:%.2f \n",pesoIdeal);
    }

    else if(sexo == 'f'){
        pesoIdeal = (62.1 * altura) - 44.7;
         printf("Peso ideal:%.2f \n",pesoIdeal);
    }
    else{
        printf("Sexo inválido! \n");
    }



    return 0;
}