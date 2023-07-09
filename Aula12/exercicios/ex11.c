#include <stdio.h>


double avgvet(int *vet, int n);
int main ()
{

    int v[6] = {2, 4, 6, 1, 3, 5};
    printf("%lf", avgvet(v, 6) );
    return 0;
}

double avgvet(int *vet, int n)
{
    int* i = NULL;
    double media;


    for(i = vet; i < n + vet; i++)
    {

        media = media + *i;

    }

    media = media / n;

    return media;

}