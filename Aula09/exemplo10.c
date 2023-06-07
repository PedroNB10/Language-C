#include <stdio.h>
#include <stdlib.h>

int main (){

    char a[20] = "123";
    char b[20];

    int x;
    float y = 3.14;

    x = atoi(a);

    printf("%d\n", x + 1);

    //de numero para string
    sprintf(b, "%f", y);
    printf("String B: %s \n", b);
    return 0;
}