#include <stdio.h>

int quadrados(int n);

int main ()
{

    
    return 0;
}

int quadrados(int n)
{
    int i, soma = 0;

    for(i = 1; i <= n; i++)
    {

        soma = soma + i * i;

    }


    return  soma;
}