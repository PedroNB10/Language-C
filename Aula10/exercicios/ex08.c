#include <stdio.h>

typedef struct complexNumber{

    double realPart;
    double imaginaryPart;

    
}complexNumber;

int main (){

    complexNumber n1,n2;

    scanf(" %lf %lf",&n1.realPart,&n1.imaginaryPart);
    scanf(" %lf %lf",&n2.realPart,&n2.imaginaryPart);

    printf("Soma: %lf + (%lf)i\n",n1.realPart + n2.realPart, n1.imaginaryPart + n2.imaginaryPart);
    printf("Subtracao: %lf + (%lf)i\n",n1.realPart - n2.realPart, n1.imaginaryPart - n2.imaginaryPart);
    printf("Produto: %lf + (%lf)i\n",(n1.imaginaryPart * n2.imaginaryPart) *(-1) + n1.realPart * n2.realPart, n1.imaginaryPart * n2.realPart + n2.imaginaryPart * n1.realPart);
    

    return 0;
}