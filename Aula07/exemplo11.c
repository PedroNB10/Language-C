#include <stdio.h>

int main ()
{
    int i,n,soma;
    int sinal = 1;

    printf("Digite o valor de N");
    scanf("%d",&n);

    for (i = 1; i <= 2 * n -1; i++){

        soma = soma + sinal * i;
        sinal = sinal * -1;
        

        // if (i%2 == 0){
        //     soma = soma - i;
        // }
        // else{
        //     soma = soma + i;
        // }
        
    }

    printf(" Resposta = %d",&soma);
    return 0;
}