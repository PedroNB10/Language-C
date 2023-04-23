#include <stdio.h>
#include <math.h>

int main ()
{
    double angulo;
    double seno;
    double cosseno;
    double tangente;

    printf("Digite o valor de um angulo:");
    scanf("%lf",&angulo);
    angulo = (angulo * M_PI )/180;

    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);

    printf("%.1lf %.1lf %.1lf \n",seno,cosseno,tangente);

    return 0;
}