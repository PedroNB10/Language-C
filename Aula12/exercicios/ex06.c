#include <stdio.h>

long long int fatorial(int x);
double serie(int n);

//3! ==> 3*2*1;
int main ()
{

   printf("%lf\n", serie(4) );

    return 0;
}

long long int fatorial(int x){
    
    long long int resultado = 1;
    int i;

    for(i = 1; i <= x; i++){
        resultado = resultado * i;
    }

    return resultado;
}

double serie(int n){

    int i, j = 1; 
    double soma = 0;


    for(i = 0; i < n; i++)
    {
        soma = soma + ((double) i / (double) fatorial(j));
        j++;
        
    }

    return soma;

}