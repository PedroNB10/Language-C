#include <stdio.h>

int qtdprimos(int number);


int main ()
{

    return 0;
}

int qtdprimos(int n){

    int i = 1;
    int j;
    int contPrimos = 0;

    for(i = 1; i < n; i++)
    {   
        int divisores = 0;
        
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0){
                divisores++;
            }
        }

        if(divisores == 2){
            contPrimos++;
        }
    }

    return contPrimos;


}
