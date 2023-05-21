#include <stdio.h>

#define TAM 10

int main()
{
	float vet[TAM], soma = 0, media;
	int i;
	
	for(i = 0; i < TAM; i++)
	{
		scanf("%f", &vet[i] );
		
		soma = soma + vet[i];
	}

	media = soma / TAM;
	
	printf("Resposta = %f\n", media );

	return 0;
}
