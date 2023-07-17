#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM 100

int main (){

    int i;
    long long int numeroTemp;
    long long int soma = 0;
    
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