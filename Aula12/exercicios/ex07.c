#include <stdio.h>

int somaAlgarismos(int number);

int main() {
    int number;
    scanf("%d", &number);

    int resultado = somaAlgarismos(number);

    printf("%d\n", resultado);
    return 0;
}

int somaAlgarismos(int number) {
    int soma = 0;


    number = (number < 0) ? -number : number;

    while (number > 0) {
        int digito = number % 10; 
        soma += digito; 
        number = number /10; 
    }

    return soma;
}
