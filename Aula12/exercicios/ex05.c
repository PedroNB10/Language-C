#include <stdio.h>

int soma(int a, int b);

int main ()
{
   printf("%d\n", soma(5, 25) );
    return 0;
}

int soma(int a, int b)
{
    int somaNum = 0;
    int i;
    int inicio = a > b ? b : a;
    int fim = inicio == a ? b : a;

    for(i = inicio; i <= fim; i++)
    {
       somaNum = somaNum + i;
    }

    return somaNum;
}