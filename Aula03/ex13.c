#include <stdio.h>

int main ()
{
    int anoNasc;
    int anoAtual;
    int idadeAnos;
    int idadeMeses;
    int idadeDias;

    printf("Digite o ano de nascimento da pessoa: ");
    scanf("%d",&anoNasc);
    printf("Digite o ano em que estamos: ");
    scanf("%d",&anoAtual);
    idadeAnos = anoAtual - anoNasc;
    printf("Idade em anos: %d \n",idadeAnos);
    idadeMeses = idadeAnos * 12;
    printf("Idade em meses: %d meses \n",idadeMeses);
    idadeDias = idadeAnos * 365;
    printf("Idade em dias: %d \n",idadeDias);

    return 0;

}