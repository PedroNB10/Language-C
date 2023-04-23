#include <stdio.h>
int main ()
{
    int idade;
    char EM;

    printf("Digite a sua idade:");
    scanf("%d",&idade);
    printf("Voce tem ensino medio completo? digite S para sim e N para nao. :");
    scanf(" %c",&EM);

    if(idade > 20 && (EM == 'S'||EM == 's') ){
        printf("VOCE ESTA APTO PARA A VAGA");

    }

    else{
        printf("Voce nao esta apto");
    }
    



    return 0;
}