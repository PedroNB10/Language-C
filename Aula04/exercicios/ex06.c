#include <stdio.h>
#include <math.h>

int main ()
{
    float lado1;
    float lado2;
    float lado3;
    float p;
    float area;

    printf("Digite os 3 lados do triangulo: \n");
    scanf("%f %f %f",&lado1,&lado2,&lado3);

    p = (lado1 + lado2 + lado3)/2;

    area = sqrt(p * (p - lado1) * (p - lado2) * (p - lado3));

    printf("Area calculada do triangulo: %.1f\n",area);

    return 0;

}