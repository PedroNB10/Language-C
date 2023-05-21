#include <stdio.h>

int main()
{
	int m, n; // dimensoes da matriz
	int i, j;
	
	// M = numero de linhas
	// N = numero de colunas
	printf("Informe os valores de M e N:\n");
	scanf("%d %d", &m, &n);
	
	int mat[m][n]; // declaracao apos ler M e N
	int t[n][m]; // transposta: N linhas, M colunas
	
	// Lendo os elementos da matriz
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("Digite mat[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j] );
		}
	}
	
	// Percorrendo a transposta e pegando os valores da original
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			t[i][j] = mat[j][i];
		}
	}
	
	// imprimindo a transposta
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("%d ", t[i][j] );
		}
		printf("\n");
	}
	
	return 0;
}
