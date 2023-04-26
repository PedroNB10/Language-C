#include <stdio.h>

int main ()
{
    int idade;
    printf("Digite a sua idade nadador:");
    scanf("%d",&idade);
    printf("Categoria:");

    if(idade == 4 || idade == 5){
        printf("Fraldinha \n");
    }
    else if (idade >= 6 && idade <= 12){
        printf("Infantil \n");
    }
    else if (idade >= 13 && idade <= 18){
        printf("Juvenil \n");
    }
    else if(idade > 18){
        printf("Adulto \n");
    }
    else{
        printf("\nIdade inválida ou fora das categorias \n");
    }

    return 0;
}