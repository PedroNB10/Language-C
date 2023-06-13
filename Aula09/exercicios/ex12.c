#include <stdio.h>


int main() {
    char frase[100];
    double num1, num2, num3, num4;
    double soma;


    scanf("%[^\n]%*c", frase);

    sscanf(frase, "%lf %lf %lf %lf", &num1, &num2, &num3, &num4);

    soma = num1 + num2 + num3 + num4;

    printf("%lf\n", soma);

    return 0;
}
