#include <stdio.h>
#include <stdlib.h>

/*
    - ler N

*/
int* aloca(int n);
void leitura (int*vet, int n);

void imprime (int*vet, int n);

void ordena(int *vet, int n);


int main ()
{
    int n;
    int *vet = NULL;
    scanf("%d", &n);
    vet = aloca(n);
    imprime(vet, n);


    return 0;
}

int* aloca(int n)
{
    int *vet = NULL;
    vet = (int*) malloc(n * sizeof(int));

    if(!vet){
        exit(1);
        printf("memoria insuficiente");
    }
    return vet;

}

void leitura (int*vet, int n){
    int *i;
    for(i = vet; i < vet + n; i++)
    {
        scanf(" %d", i);
    }
}

void imprime (int*vet, int n){
    int *i;
    for(i = vet; i < vet + n; i++)
    {
        printf("%d  ", *i);
    }
    printf("\n");
}

void ordena(int *vet, int n){
    int trocou = 1;

    while(trocou){
        trocou = 0;
        for(){
            
        }
    }
}