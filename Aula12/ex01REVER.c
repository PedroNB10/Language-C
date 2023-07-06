#include <stdio.h>

int mmcFunction(int a, int b);

int main()
{
    int a, b, MMC = 0, maior, menor;

    scanf(" %d %d", &a, &b);
    if (a > b)
    {
        maior = a;
        menor = b;
    }
    else
    {
        maior = b;
        menor = a;
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    if (maior % menor == 0)
    {
        MMC = maior;
    }

    else
    {
        MMC = mmcFunction(maior, menor);
    }

    printf("MMC é: %d", MMC);

    return 0;
}

int mmcFunction(int maior, int menor)
{
    int resp = 0, i;

    for (i = menor; i <= menor * maior; i++)
    {

        if (i % menor == 0 && i % maior == 0)
        {
            resp = i;
            break;
        }
    }

    return resp;
}