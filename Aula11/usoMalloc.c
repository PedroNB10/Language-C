#include <stdio.h>
#include <stdlib.h>//malloc

int main()
{

    float *p = NULL;
    int i;

    //alocando 100 posicoes de float
    p = (float*) malloc(100 * sizeof(float));

    if(p == NULL) //alocacao falhou
    {
        printf("Falha na alocacao de memoria\n");
        exit(1);//interrompe a execução(MATA O PROGRAMA)
    }

    for(i = 0; i < 5; i++){
        printf("Digite o valor de p[%d]: ", i);
        scanf("%f", &p[i]);
    }

     for(i = 0; i < 5; i++){
        printf("Valores digitados: ", i);
        scanf("p[%d]: %f\n", i,p[i]);
    }

    free(p); //liberar memoria

    // programa "valgrind"  consegue analisar 



    return 0;
}