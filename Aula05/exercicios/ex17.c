#include <stdio.h>
int main ()
{
    float diametro,altura,profundidade,largura;

    printf("Digite o diâmetro da bola de boliche:");
    scanf("%f",&diametro);
    printf("Digite a altura, largura e profundidade respectivamente:\n");
    scanf("%f%f%f",&altura,&largura,&profundidade);

    if( diametro < largura && diametro < profundidade && diametro < altura){
        printf("sim \n");
    }
    else{
        printf("nao \n");
    }

    return 0;
}