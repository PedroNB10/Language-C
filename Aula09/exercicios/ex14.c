#include <stdio.h>
#include <stdlib.h>


int main() {

    char auxiliar = '0';
    char cpf[11];
    long int cpfInInt;
    int vetorNumbers[11];
    int i,j = 0,count = 0,realTimeNumber;
    scanf("%ld", &cpfInInt);
    sprintf(cpf,"%ld",cpfInInt);
   

    for(i = 0; i < 11; i ++){
     auxiliar = cpf[i];
    
     realTimeNumber = atoi(&auxiliar);
     vetorNumbers[i] = realTimeNumber;

    
    }

    while(j < 10){
        count = 0;
        for(i = 0; i < 11; i++){
            if(vetorNumbers[i] == j){
                count++;
            }
        }

        printf("%d = %d\n",j,count);
        j++;
    }
 

    return 0;
}
