#include <stdio.h>

int main ()
{
    int b,a;

    printf("Endereço de A: %p\n", &a);
    printf("Endereço de B: %p\n", &b);


    if(&a > &b ){
        printf("Endereço de A é maior\n");
    }
    else{
         printf("Endereço de B é maior\n");
    }

    return 0;
}