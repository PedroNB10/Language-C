#include <stdio.h> 
#include <stdlib.h> // tem a funcao calloc
//Função calloc exige mais do computador pelo fato de zerar automaticamente os valores do ponteiro, portanto prefira sempre usar a malloc

#define TAM 5

int main (){
    int *p = NULL;
    int i;
    // abaixo é preciso usar o typecast para transformar em tipo inteiro para alocar a memória

    //malloc pode retornar:

   //  Um ponteiro void* para o início do bloco de memória alocado.
   //  Um ponteiro nulo (NULL), no caso do sistema operacional se negar a fornecer memória ao programa.
   //usando calloc, a única diferença é que são usados parâmetros para ela calcular
    p = (int *) calloc(TAM, sizeof(int) );//alocando um array com 5 posições de int
    //é preciso colocar um typecast diferente caso o ponteiro 'p' tenha um tipo diferente

    if(!p) // ou p != true
    {
        printf("Memoria insuficiente...\n");
        exit(1);
    }

    for(i = 0; i < TAM; i++) printf("%d ", p[i]);
    printf("\n");

    free(p);//liberação da memória do ponteiro p
    
    return 0;
}