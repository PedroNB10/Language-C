#include <stdio.h>

#define N 3

int main()
{
	float notas[N];
	float media, soma = 0;
	int i; // variavel do for (sempre INT!!!)

	for(i = 0; i < N; i++)
	{
		printf("Digite a nota da posicao %d: ", i);
		scanf("%f", &notas[i] );
	}

	for(i = 0; i < N; i++)
	{
		soma = soma + notas[i];
	}

	media = soma / N;

	printf("Media = %f\n", media);
	
	for(i = 0; i < N; i++)
	{
		if(notas[i] > media)
		{
			printf("Nota [%d] = %f\n", i, notas[i] );
		}
	}
		
	return 0;
}

