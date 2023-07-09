#include <stdio.h>

int somafat(int n);

int main ()
{
    printf("%d", somafat(10));
    return 0;
}

int somafat(int n){

    long long int fatN = 1;
    long long int soma = 0;
    int digito;

    int i = 1;
    for (i = 1; i <= n; i++)
    {   
        fatN = fatN * i;
    }

    printf("fat: %lld\n", fatN);
    while(fatN > 0)
    {
        
        digito = fatN % 10;
        fatN = fatN / 10;
        soma = soma + digito;

    }

    return soma;

}