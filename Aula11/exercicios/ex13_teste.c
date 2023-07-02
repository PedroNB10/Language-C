#include <stdio.h>
#include <time.h>// tempo atual 
#include <stdlib.h>// srand, rand e malloc
int main ()
{
    int numLoteria[15], numSorteados[15], contAcertos = 0, tamanhoArray;
    int *acertos;
    int i, j = 0;
    srand(time(NULL));

    if(!acertos){
        printf("Memória Insuficiente\n");
        exit(1);
    }

    for(i = 0; i < 15; i++)
    {
        numLoteria[i] = 1 + rand()%24;
        numSorteados[i] = 1 + rand()%24;
        if(numLoteria[i] == numSorteados[i]) contAcertos++;
    }

    acertos = (int*) malloc(contAcertos * sizeof(int)); 
    tamanhoArray = contAcertos;

    for(i = 0; i < 15; i++)
    {
        if(numLoteria[i] == numSorteados[i])
        {
            acertos[j] = numLoteria[i];
            j++;
            contAcertos++;
        }
        if(j + 1 == tamanhoArray){
            break;
        }
    }

    printf("Numeros Acertados:\n");

    for(i = 0; i < tamanhoArray; i++)
    {
        printf("%d\n", acertos[i]);
    }


    free(acertos);

    return 0;
}