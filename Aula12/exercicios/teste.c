#include <stdio.h>

int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    
    else
    {
        return n * fatorial(n - 1);
    }
}

int somafat(int n)
{
    int f = fatorial(n);
    int soma = 0;

    while (f > 0)
    {
        soma += f % 10;
        f /= 10;
    }

    return soma;
}


int main (){

	printf("%d",somafat(10));
	return 0;
}