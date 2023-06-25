#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int imprimirEnderecos(int *vetor,int tamanho){
    int i;

    vetor = (int*) malloc(tamanho * sizeof(int));
    for(i = 0; i < tamanho; i++){
        
        printf("endereco: %p, Conteudo: %d\n",vetor + i, vetor[i] );
    }

    printf("\n%p - %p = %ld\n", vetor, vetor + 2, (vetor + 2) -(vetor));
    free(vetor);
    //A aritmética de ponteiros é indefinida a menos que executada sobre um vetor.
}

int main (){
    int vet[TAM] = {1,2,3,4,5,6,7,8,9,10};
    imprimirEnderecos(vet,TAM);




    return 0;
}