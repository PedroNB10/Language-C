#include <stdio.h>

int main () 
{
    float valorProduto;
    
    printf("Digite o valor do produto: ");
    scanf("%f",&valorProduto);
    valorProduto = valorProduto * 0.88;
    printf("Valor final com desconto : %.2f \n",valorProduto);

    return 0;
}