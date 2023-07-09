#include <stdio.h>
#include <stdlib.h>

void endPoints(int *vet, int n,int *max, int *min);
int main()
{
    int N;
    int maior,menor;
    scanf("%d", &N);
    int *vet = (int*)  malloc(N * sizeof(int));
    int *i = NULL;
  
    for(i = vet; i < N + vet; i++){

        scanf(" %d", i);
    }

    endPoints(vet,N,&maior,&menor);
    printf("%d %d\n", menor, maior);
    free(vet);


    return 0;
}

void endPoints(int *vet, int n,int *max, int *min){

    int *i = NULL;

    *max = *vet;
    *min = *vet;

    for(i = vet; i < vet + n ; i++)
    {
        if(*i > *max){
            *max = *i;
        }

        if(*i < *min){
            *min = *i;
        }

    } 
}