#include <stdio.h>
#include <math.h>

int main (){
    float vetor[10];
    float vetor2[10];
    int i,j;
    for(i = 0; i < 10; i++){
        scanf("%f",&vetor[i]);
    }
    
     for(i = 0; i < 10; i++){
        printf("%.f ",vetor[i]);
    }
    
    printf("\n");
    
     for(j = 0; j < 10; j++){
     vetor2[j] = pow(vetor[j],2);
    }
    
     for(j = 0; j < 10; j++){
        printf("%.0f ",vetor2[j]);
    }
    
    
    
    return 0;
}