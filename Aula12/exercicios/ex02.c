#include <stdio.h>


int primo(int n);

int main ()
{

    return 0;
}

int primo(int n)
{
    
    int i, contDivisors = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0) contDivisors++;
    }

    if(contDivisors == 2 )
    {
        return 1;
    }

    else{
        return 0;
    }
}