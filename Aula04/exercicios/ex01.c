#include <stdio.h>

int main ()
{
    float valorEmReais;
    float cotacaoDolar;
    float valorConvertido;

    printf("Digite o valor em reais R$:");
    scanf("%f",&valorEmReais);
    printf("Agora digite a cotacao do dolar atual US$:");
    scanf("%f",&cotacaoDolar);
    valorConvertido = valorEmReais / cotacaoDolar;
    printf("O valor R$ %.2f convertido fica em : US$ %.2f \n",valorEmReais,valorConvertido);

    return 0;
}