#include <stdio.h>

int main()
{
	int n;
	int i; // variavel que passa pela sequencia de 1 a N
	
	printf("Informe o valor de N: ");
	scanf("%d", &n);
	
	// inicializar a variavel da sequencia
	i = 1;
	
	while(i <= n)
	{
		printf("%d\n", i);
		
		// incrementa a variavel da sequencia
		// i = i + 1;
		// i += 1; // variavel igual a ela mesma mais outra coisa
		i++; // incremento unitario
	}

	return 0;
}

