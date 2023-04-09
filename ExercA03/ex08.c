#include <stdio.h>
#include <math.h>

int main ()
{
    double raio;
    double area;
    printf("Digite o valor do raio: ");
    scanf("%lf",&raio);
    area = M_PI * pow(raio,2);
    printf("Area do circulo: %lf \n",area);
    return 0;
}