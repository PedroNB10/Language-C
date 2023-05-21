#include <stdio.h>

int main ()
{
    int n = 5;
    int i;

 long long int fatorial = 1;

    for (i = 1; i <= n; i++){
        fatorial = fatorial * i;
        // n = n * i;

    }

    printf("%lld\n",fatorial);
    return 0;
}