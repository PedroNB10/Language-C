#include <stdio.h>
#include <time.h> // biblioteca para pegar o tempo atual
#include <stdlib.h> // biblioteca para usar rand() e srand()

int main () 
{
    int numero1;
    int numero2;

    srand( time(NULL) ); //gera uma semente a partir do horario contado, se nao tiver nao vai ser aleatorio e o valor semente sempre sera zero
    numero1 = rand(); //gera um numero aleatorio a partir da seed 
    numero2 = rand();
    printf("%d \n",numero1);
    printf("%d \n",numero2);

    return 0;

}