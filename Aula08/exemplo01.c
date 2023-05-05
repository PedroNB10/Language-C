#include <stdio.h>

int main (){

    double n1,n2,n3,media;

    scanf("%lf %lf %lf",&n1,&n2,&n3);

    media = (n1 + n2 + n3)/3.0;




    if(n1 > media){
        printf("N1 = %lf \n",n1);
    }

     if(n2 > media){
        printf("N2 = %lf \n",n2);
    }

     if(n3 > media){
       printf("N3 = %lf \n",n3);
    }

    return 0;
}