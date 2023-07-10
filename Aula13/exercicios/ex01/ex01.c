#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    char cidade[40] ;
    int habitantes;
    FILE *arquivo;
    int habitantesCidadeMaisPopulosa = 0;
    char cidadeMaisPopulosa[40];
    arquivo = fopen("arquivoEntrada.txt", "r");


    if(arquivo == NULL){
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }
    fscanf(arquivo, " %d\t%[^\t\n]", &habitantes, cidade);  

    printf("Leitura do arquivo txt:\n");

    while(!feof(arquivo))
    {
        if(habitantes > habitantesCidadeMaisPopulosa){
            habitantesCidadeMaisPopulosa = habitantes;
            strcpy(cidadeMaisPopulosa, cidade);
        }
        printf("Cidade = %s\nHabitantes =  %d\n", cidade, habitantes);
        fscanf(arquivo, " %d\t%[^\t\n]", &habitantes, cidade);  
    }
    

    printf("\nCidade mais populosa: %s\nHabitantes: %d\n", cidadeMaisPopulosa, habitantesCidadeMaisPopulosa);

    fclose(arquivo);
  
    arquivo = fopen("arquivoSaida.txt", "w");
    fprintf(arquivo,"%s\t%d",cidadeMaisPopulosa,habitantesCidadeMaisPopulosa);

    fclose(arquivo);
    //Exemplo de txt na primeira linha: 10000 santa rita do sapucai

    


    return 0;
}