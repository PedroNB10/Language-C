#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int *p = (int *) malloc(TAM * sizeof(int));
    int *q = (int *) calloc(TAM , sizeof(int));
    int i;

 

    if(!p || !q)
    {
        exit(1);
    }
    
    for(i = 0; i < TAM; i++)
    {
        printf("%d: %d \t %d \n",i, p[i],q[i]);

    }
    free(p);
    free(q);
    return 0;
}