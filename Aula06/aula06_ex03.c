#include <stdio.h>

int main()
{
	int n;
	int i;
	float soma = 0;
	
	printf("Informe o valor de N: ");
	scanf("%d", &n);
	
	// inicializacao
	i = 1;
	
	while(i <= n)
	{
		soma = soma + (1.0 / i);
		
		// incremento (evitar loop infinito)
		i++;
	}

	printf("Resposta = %f\n", soma);

	return 0;
}

