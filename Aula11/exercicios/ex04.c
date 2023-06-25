#include <stdio.h>

int main ()
{
    int vet[10],i, *point;

    point = vet;

    for(i = 0; i < 10; i++)
    {
        scanf(" %d",&vet[i]);
    }

    for(i = 0; i < 10; i++)
    {
        printf("Endereco de %d : %p\n", *(point + i),point + i);
    }



    return 0;
}