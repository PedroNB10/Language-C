#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    FILE *arquivoEscrita;
    
    int n;
    int limiteDeCaracteres = 40;
    scanf(" %d", &n);
    double *notas = (double *)  malloc(n * sizeof(double));
    char **nomes = (char **)    malloc(n * sizeof(char *)); // matriz de caracter == vetor de string

    arquivoEscrita = fopen("alunos.txt", "w");

    int i = 0;

    nomes[0] = (char *) malloc( n * limiteDeCaracteres *sizeof(char));

    if(!nomes[0] || !nomes || !notas){
        printf("Memoria Insuficiente\n");
        exit(1);
    }


    for (i = 1; i < n; i++)
    {
        nomes[i] = nomes[i - 1] + limiteDeCaracteres; // limiteDeCaracteres são as colunas, ou seja quantidade máxima de caracteres
    }

    for (i = 0; i < n; i++)
    {

        scanf(" %[^\n]", nomes[i]);
        while(strlen(nomes[i]) > 40){
            printf("Nome com tamanho Inválido, insira um nome com até 40 caracteres!\n");
            scanf(" %[^\n]", nomes[i]);
        }

        scanf(" %lf", (notas + i));
        fprintf(arquivoEscrita,"Nome:%s\tNota:%.2lf\n",nomes[i],*(notas + i));
    }


    for (i = 0; i < n; i++)
    {
        printf("Nome: %s \n", nomes[i]);
        printf("Nota: %lf\n\n",notas[i]);
    }



    fclose(arquivoEscrita);
    free(nomes[0]);
    free(nomes);
    free(notas);



    return 0;
}

