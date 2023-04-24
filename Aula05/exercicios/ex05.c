#include <stdio.h>

int main ()
{
    float nota1,nota2,media;
    printf("Digite as duas notas: \n");
    scanf("%f%f",&nota1,&nota2);

    if(nota1 >= 0  && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
        media = (nota1 + nota2) / 2;
        printf("%.2f\n",media);

    }
    else{
        printf("notas incorretas \n");
    }

    return 0;

}