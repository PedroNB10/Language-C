#include <stdio.h>

void troca(int *a, int *b);

int main ()
{
    int a = 2;
    int b = 3;
    int *pointA = &a;
    int *pointB = &b;

    printf("Antes da funcao: A = %d B = %d\n", a, b);
    troca(&a,&b); // poderia usar troca(pointA,pointB);
    printf("Depois da funcao: A = %d B = %d\n", a, b);
    return 0;
}

void troca (int *a, int *b){
    int temp;
    printf("Ao entrar na funcao: A = %d B = %d\n", *a, *b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("Ao sair da funcao: A = %d B = %d\n", *a, *b);
}

