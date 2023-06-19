#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct veiculo //nome da struct
	{	
         char placa[8]; // tem 7 números mas tmb tem o \0
		 char marca[20];
         char modelo[20];
         char cor[20];

		
		
	}veiculo; //nome da variavel
	

int main (){

    veiculo carro[2];

    scanf(" %s %s %s %s", carro[0].placa,carro[0].marca,carro[0].modelo,carro[0].cor);
    scanf(" %s %s %s %s", carro[1].placa,carro[1].marca,carro[1].modelo,carro[1].cor);
	
	
    if(strcmp(carro[0].marca, carro[1].marca) == 0 && strcmp(carro[0].cor, carro[1].cor) == 0 ){
        printf("marca e cor sao iguais\n");
    }
    else{
        printf("marca e cor sao diferentes\n");
    }

	
	return 0;
}
