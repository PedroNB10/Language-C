#include <stdio.h>
#include <string.h>

int main()
{
    char nm[3][20];
    char aux[20];
    int i,j;

    for (i = 0; i < 3; i++)
    {
        printf("\nNome %i: ", i + 1);
        scanf("%s", nm[i]);
    }

    for (i = 1; i < 3; i++)
    { /* 3 = qtde de palavras */
        for (j = 1; j < 3; j++)
        {
            // verifica se tem que ser depois, se for troca de posição
            if (strcmp(nm[j - 1], nm[j]) > 0)
            {
                strcpy(aux, nm[j - 1]);
                strcpy(nm[j - 1], nm[j]);
                strcpy(nm[j], aux);
            }
        }
        for (i = 0; i < 3; i++)
            printf("\n%s", nm[i]);
    }
    return 0;
}

// só mostrar a matriz
