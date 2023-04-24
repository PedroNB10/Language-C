#include <stdio.h>

int main ()
{
    float valorProduto;
    int estado;

    printf("Digite o valor do produto:");
    scanf("%f",&valorProduto);
    printf("Digite o Estado (use 1 = MG; 2 = SP; 3 = RJ;e 4 = ES):");
    scanf("%d",&estado);
    // MG = 12%; SP = 7%; RJ = 15%; ES = 8%

    if(estado == 1){
        valorProduto = valorProduto *1.12;
    }
    else if (estado == 2){
        valorProduto = valorProduto * 1.07;
    }
    else if (estado == 3){
        valorProduto = valorProduto * 1.15;
    }
    else if (estado == 4){
        valorProduto = valorProduto * 1.08;
    }

    printf("Valor final acrescido do imposto:%.2f\n",valorProduto);

    

    return 0;
}