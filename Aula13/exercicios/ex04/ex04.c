#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM 3

int main (){

    FILE * arquivoEscrita = fopen("NumerosAleatorios.bin","wb");
   
    int i;
    srand(time(NULL));


    long long int numeroTemp;
    long long int soma = 0;


    for(i = 0; i < TAM; i++){

        numeroTemp = 1 + rand()%1000;
       
        fwrite(&numeroTemp, sizeof( long long int), 1,arquivoEscrita);
    }
    fclose(arquivoEscrita);

    FILE * arquivoLeitura = fopen("NumerosAleatorios.bin","rb");

    for(i = 0; i < TAM; i++){

        fseek(arquivoLeitura,i * sizeof(long long int),SEEK_SET);
        fread(&numeroTemp,sizeof(long long int),1,arquivoLeitura);
        soma = soma + numeroTemp;
        printf("Numero: %lld\n",numeroTemp);
    }

    printf("Soma: %lld\n", soma);

    fclose(arquivoLeitura);

    return 0;
}