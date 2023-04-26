#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,x1,x2,delta,menor,maior;
    printf("Digite o valor de a,b e c da equação do segundo grau: \n");
    scanf("%f%f%f",&a,&b,&c);
    delta = pow(b,2) - 4 * a * c;

    x1 = (-b + sqrt(delta)) / (2 * a);

    x2 = (-b - sqrt(delta)) / (2 * a);


    if(x1 >= x2){
        menor = x2;
        maior = x1;
    }

    else{
        menor = x1;
        maior = x2;
    }

    if (delta > 0){ //duas raizes diferentes 
        printf ("%.2f %.2f \n",menor,maior);

    }

    else if (delta == 0 ){ //duas raizes iguais
        printf("%.2f \n",maior);
    }

    else{// sem raizes
        printf("sem raizes reais \n");
    }



    return 0;
}