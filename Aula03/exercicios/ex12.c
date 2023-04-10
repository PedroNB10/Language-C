#include <stdio.h>

int main () 
{
    float salario;


    printf("Digite o salário do funcionario: ");
    scanf("%f",&salario);
    salario = salario * 1.2;
    
    printf("Novo salario: %f \n",salario);
    return 0;
}