#include <stdio.h>



int main(){
    int vetor[8];
    int posicao1,posicao2, soma = 0,i;
    
    for(i=0; i < 8; i++){
        scanf("%d",&vetor[i]);
    }
    
    do{
        scanf("%d",&posicao1);
        scanf("%d",&posicao2);    
    }while(posicao1< 0 || posicao2<0);
    
    
    soma = vetor[posicao1] + vetor[posicao2];
    
    printf("%d",soma);
    
    
    
    
    
    return 0;
}