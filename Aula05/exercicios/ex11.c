#include <stdio.h>

int main ()
{
    int idade,anos;

    printf("Digite a sua idade e o tempo de serviço nessa ordem: \n");
    scanf("%d%d",&idade,&anos);
    
    if( idade >= 65 || anos >= 30 || (idade >= 60 && anos >= 25)){
        printf("sim \n");
    }

    else{
        printf("nao \n");
    }



    return 0;
}