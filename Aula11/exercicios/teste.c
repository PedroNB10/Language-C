#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int n;
    n = 1 + rand() % 24;
    printf("%d\n", n);

    return 0;
}