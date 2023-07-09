#include <stdio.h>
#include <ctype.h>

float avarageA(float n1, float n2, float n3);

float avarageP(float n1, float n2, float n3);

int main()
{

    float n1,n2,n3;
    char symbol;
    float finalAvarege;
    scanf(" %f %f %f %c", &n1, &n2, &n3, &symbol);
    

    if(symbol == 'A') finalAvarege = avarageA(n1,n2,n3);
    
    if(symbol == 'P') finalAvarege = avarageP(n1,n2,n3);

    printf("%.2f\n",finalAvarege);

    return 0;
}

float avarageA(float n1, float n2, float n3)
{
        return (n1 + n2 + n3) / 3.0;
}

float avarageP(float n1, float n2, float n3){
        return (n1*5 + n2*3 + n3*2) / 10.0;
}

