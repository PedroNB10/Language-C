#include <stdio.h>

int main ()
{
    int n = 5;
    int i;

 long long int fatorial;

    for (i = 1; i <= n; i++){
        fatorial = fatorial * i;
        // n = n * i;

    }

    printf("%lld\n",fatorial);
    return 0;
}