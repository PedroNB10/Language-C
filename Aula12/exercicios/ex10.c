#include <stdio.h>

int maxvet(int *vet, int n);

int main ()
{
    int v[6] = {2, 4, 6, 1, 3, 5};
    printf("%d", maxvet(v, 6) );
    return 0;
}

int maxvet(int *vet, int n){

    int* i = NULL;
    int maior = *vet;

    for(i = vet; i < n + vet; i++)
    {
        if(*i > maior)
        {
            maior = *i;
        }

    }

    return maior;
}