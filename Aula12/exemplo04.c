#include <stdio.h>
// cada função tem uma função específica,
void quadrado(float lado, float *area,float *perimetro);


int main ()
{
    float lado, area, perimetro;

    scanf(" %f", &lado);

    quadrado(lado, &area, &perimetro);


    printf("Area = %f\n", area);
    printf("Perimetro = %f\n", perimetro);


    return 0;
}

void quadrado(float lado, float *area,float *perimetro){
    *area = lado * lado;
    *perimetro = lado * 4;
}