#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf(" %d %d", &a, &b);

     if(&a > &b)
    {
        printf("Valor: %d endereco de a: %p\n",a, &a);
        printf("Valor: %d endereco de b: %p\n",b, &b);
        printf("Maior Endereço:%p (variavel a)\n",&a);
    }
    else
    {
        printf("Valor: %d endereco de a: %p\n",a, &a);
        printf("Valor: %d endereco de b: %p\n",b, &b);
        printf("Maior Endereço:%p (variavel b)\n ",&b);
    }
    return 0;
}