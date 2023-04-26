#include <stdio.h>

int main ()
{
    float l1,l2,l3;

    printf("Digite os três lados do triângulo: \n");
    scanf("%f%f%f",&l1,&l2,&l3);

    if(l1 == l2 && l2 == l3){
        printf("equilatero \n");
    }

    else if(l1 != l2 && l2 != l3 && l1 != l3 ){
        printf("escaleno \n");
    }

    else{
        printf("isosceles \n");
    }

    return 0;
}