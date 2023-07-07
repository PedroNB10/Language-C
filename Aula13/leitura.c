#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int conta;
    char nome[100];
    float saldo;

    FILE *arq = NULL;

    arq = fopen("banco.txt","r");

    fscanf(arq,"%d\t%[^\t] %f",&conta,nome,&saldo); //lê o registro
    //ffscanf devolve quantas variáveis foram lidas

    while(!feof(arq))//end of file (ler até o final)
    {
        printf("%d = %s: %.2f\n", conta, nome, saldo);

        fscanf(arq,"%d\t%[^\t] %f",&conta,nome,&saldo);//lê o registro 
    }

    fclose(arq);
    return 0;
}