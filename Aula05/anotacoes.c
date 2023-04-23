#include <stdio.h>

int main ()
{
   
    float media;
    float n1;
    float n2;

    printf("Digite a sua primeira nota: ");

    scanf("%f",&n1);
    printf("Digite a segunda nota:");
    scanf("%f",&n2);

    media = (n1 + n2)/2 ;



        if(media >= 6.0)
        {
            printf("Parabens voce foi aprovado!!! \n");

        }

        else{
            printf("Voce foi reprovado! \n");
        }


    return 0;
}