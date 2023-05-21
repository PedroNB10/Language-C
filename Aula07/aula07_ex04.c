#include <stdio.h>

#define TAM 10

int main()
{
	int vet[TAM];
	int i, maior, idx;
	
	// leitura dos elementos
	for(i = 0; i < TAM; i++)
	{
		scanf("%d", &vet[i] );
	}
	
	maior = vet[0];
	idx = 0;

	// buscando o maior elemento
	for(i = 0; i < TAM; i++)
	{
		if(vet[i] > maior)
		{
			maior = vet[i];
			idx = i;
		}
	}
	
	printf("Maior elemento = %d\n", maior);
	printf("Posicao = %d\n", idx);

	return 0;
}
