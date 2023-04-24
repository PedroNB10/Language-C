#include <stdio.h>

int main ()
{
    float salario;
    float emprestimo;

    printf("Digite o seu salario:");
    scanf("%f",&salario);
    printf("Digite o valor da prestacao do emprestimo:");
    scanf("%f",&emprestimo);
    
    if(emprestimo > 0.2 * salario){
        printf("emprestimo nao concedido \n");
    }
    else{
        printf("emprestimo concedido \n");
    }

    return 0;
}