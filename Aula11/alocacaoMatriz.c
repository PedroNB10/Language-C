#include <stdio.h>
#include <stdlib.h>

// os saltos nesse método torna-o ineficiente

int main()
{
    int **p = NULL;
    int i, j;

    p = (int **)malloc(3 * sizeof(int *));

    for (i = 0; i < 3; i++)
    {
        p[i] = (int *)malloc(4 * sizeof(int));
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
           printf("%p ",&p[i][j]);
        }
    }

    return 0;
}