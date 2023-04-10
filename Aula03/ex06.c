#include <stdio.h>

int main ()
{
    float base;
    float altura;
    float areaTri;




    printf("Digite os valores da base e da altura \n");
    scanf("%f",&base);
    scanf("%f",&altura);

    areaTri = (base*altura)/2;


    printf("Area do triangulo: %f",areaTri);
    return 0;

}