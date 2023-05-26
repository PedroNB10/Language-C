#include <stdio.h>

int main ()
{
    int i, vetor[10],maior,menor,posicaoMenor = 0,posicaoMaior= 0;
    
    for (i = 0; i < 10; i++){
        scanf("%d",&vetor[i]);
        
    }
    
    maior = vetor[0];
    menor = vetor[0];
    
    for (i = 0; i < 10; i++){
        if(vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
        
        if(vetor[i] < menor){
            menor = vetor[i];
            posicaoMenor = i;
        }
    }
    
    printf("%d %d\n",maior,menor);
    printf("%d %d",posicaoMaior,posicaoMenor);
    
    
    
    
    return 0;
}