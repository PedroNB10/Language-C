#include <stdio.h>
#include <string.h>
int main()
{
    char stringS[1000000], stringT[1000000], stringS2[1000000];
    long int contadorDiferenteA = 0, i = 0, j = 0;

    scanf("%s", stringT);
    while (stringT[i] != '\0')
    {
        if (stringT[i] != 'a')
        {
            contadorDiferenteA++;
        }
        i++;
    }

    for (i = strlen(stringT) - contadorDiferenteA / 2; i < strlen(stringT); i++)
    {
        stringS2[j] = stringT[i];
        j++;
    }

    stringS2[j + 1] = '\0';

    j = 0;
    for (i = 0; i < strlen(stringT) - contadorDiferenteA / 2; i++)
    {
        stringS[j] = stringT[i];
        j++;
    }

    stringS[j + 1] = '\0';

    j = 0;
    for (i = 0; i < strlen(stringS); i++)
    {
        if (stringS[i] != 'a')
        {
            if (stringS[i] == stringS2[j])
            {
                j++;
            }
        }
    }

    if (j == contadorDiferenteA / 2 && contadorDiferenteA % 2 == 0)
    {
        printf("%s\n", stringS);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}