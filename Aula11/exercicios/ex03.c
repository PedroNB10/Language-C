#include <stdio.h>
#include <stdlib.h> // rand e srand
#include <time.h> //tempo atual

int main ()
{   
    int a = 3 ,  *point01;
    float b = 2.5, *point02;
    char c =  'X',  *point03;
    printf("Valores antes da modificação:\n");
    printf("a: %d, b: %f c: %c\n",a,b,c);

    srand(time(NULL));

    point01 = &a;
    point02 = &b;
    point03 = &c;

    *point01 = rand()%10;

    *point02 = rand()%10 +  (rand()%10)/10.0;

    *point03 = 'Y';

    printf("Valores depois da modificação:\n");
    printf("a: %d, b: %f c: %c\n",a,b,c);


    return 0;
}