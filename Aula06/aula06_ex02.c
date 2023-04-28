#include <stdio.h>

int main()
{
	int n;
	int i;
	int soma = 0;
	
	printf("Informe o valor de N: ");
	scanf("%d", &n);
	
	// inicializacao
	i = 1;
	
	while(i <= n)
	{
		soma = soma + i;
		
		// incremento (evitar loop infinito)
		i++;
	}

	printf("Resposta = %d\n", soma);

	return 0;
}

