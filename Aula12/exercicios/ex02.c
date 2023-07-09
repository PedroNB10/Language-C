#include <stdio.h>


int primo(int n);

int main ()
{
    return 0;
}


int primo(int n)
{
   if(n < 0) n = -1* n;
    int i = 1, contDivisors = 0;


    for(i = 1; i <= n; i++)
    {
        if(n % i == 0){
            contDivisors = contDivisors + 1;
           
        } 
    }



    if(contDivisors == 2)
    {
        return 1;
    }

    else{
        return 0;
    }
}