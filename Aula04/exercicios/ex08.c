#include <stdio.h>
#include <math.h>

int main ()
{

    float raio;
    float altura;
    float volume;
    const long double pi = M_PI;

    printf("Digite o raio e a altura do cilindro: \n");
    scanf("%f%f",&raio,&altura);
    volume = pi * pow(raio,2) *altura;
    printf("O volume do cilindro eh: %.2f \n",volume);
    
    return 0;
}