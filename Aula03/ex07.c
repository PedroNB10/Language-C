#include <stdio.h>

int main () 

{
    float baseMenor;
    float baseMaior;
    float altura;
    float area;

    printf("Digite os valores das bases menor e maior \n");
    scanf("%f",&baseMenor);
    scanf("%f",&baseMaior);
    printf("Digite o valor da altura: : ");
    scanf("%f",&altura);

    area = ((baseMaior + baseMenor)/2)*altura;

    printf("Area do trapezio: %f \n", area);
    return 0;

}
