#include <stdio.h>
#include <time.h>// tempo atual 
#include <stdlib.h>// srand, rand e malloc
int main ()
{
    int numLoteria[15], numSorteados[15], contAcertos = 0;
    int *acertos = (int*) malloc(15 * sizeof(int));
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
        if(numLoteria[i] == numSorteados[i])
        {
            acertos[j] = numLoteria[i];
            j++;
            contAcertos++;

        } 
       
    }

    if(contAcertos != 0) printf("Números sorteados: \n");

    for(i = 0; i < contAcertos; i++){
        printf("%d\n", acertos[i]);
    }


    free(acertos);

    return 0;
}