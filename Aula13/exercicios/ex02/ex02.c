#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //arquivo tipo:
    //nome e data de nascimento

    FILE * arq, *arq2;
    int dia, mes, ano;
    int idadeAnos;
    char nome[100];
    int dia_atual, mes_atual,ano_atual;
    int qtdDeLinhas = 0;

    printf("Digite a data atual no formato dd/mm/aaaa:");
    scanf("%d/%d/%d",&dia_atual,&mes_atual,&ano_atual);

    if(arq == NULL || arq2 == NULL){
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }



    arq = fopen("aniversario.txt", "r");
    arq2 = fopen("idades.txt","w");

    fscanf(arq," %d/%d/%d\t%[^\t\n]",&dia,&mes,&ano,nome); 
    

    while(!feof(arq)){

        idadeAnos = ano_atual - ano;
     
        //verificando se a pessoa fez aniversário esse ano
        if(mes > mes_atual || (mes == mes_atual) && dia > dia_atual){
            idadeAnos--;
        }

        printf("%s tem %d anos de idade.\n",nome,idadeAnos);

        fprintf(arq2,"Nome:%s\tIdade:%d\n",nome,idadeAnos);

        fscanf(arq," %d/%d/%d\t%[^\t\n]",&dia,&mes,&ano,nome); 
    }

    
     fclose(arq);

    // while(qtdDeLinhas < 0){

    //     fprintf();
    // }

    return 0;
}