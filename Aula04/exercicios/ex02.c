#include <stdio.h>

int main ()
{
    float valorProduto;
    int porcentagem;
    float desconto;

    printf("Informe o valor do produto:");
    scanf("%f",&valorProduto);
    printf("Informe o valor da porcentagem do desconto:");
    scanf("%d",&porcentagem);
    desconto = (valorProduto * porcentagem)/100;
    valorProduto =  valorProduto - desconto;
    printf("%.2fR$ %.2fR$ \n",valorProduto,desconto);
    
    return 0;
    
    
}