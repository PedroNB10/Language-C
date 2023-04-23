#include <stdio.h>

int main ()
{
    float temp;
    printf("Qual eh a sua temperatura corporal: ");
    scanf("%f",&temp);

    if(temp > 37.5){
        printf("Voce esta com febre!  \n");
    }



    return 0;
}