#include <stdio.h>

int main (){
    int n1,n2,n3;
    int maior;
    scanf("%d %d %d",&n1,&n2,&n3);
    maior = n1;

    if(n2 > maior){
        maior = n2;
    }

    else if (n3 > maior){
        maior = n3;
    }

    if(maior == 90){
        printf("retangulo");
    }
    else if(maior > 90){
        printf("obtusangulo");
    }

    else{
        printf("acutangulo");
    }


    return 0;
}