#include <stdio.h>

int main()
{
	int m[3][3];
	int v[15];
	int i, j, k; // i, j: matriz; k: vetor

	// Leitura da matriz
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Digite m[%d][%d]: ", i, j);
			scanf("%d", &m[i][j] );
		}
	}

	// Leitura do vetor
	for(k = 0; k < 15; k++)
	{
		printf("Digite v[%d]: ", k);
		scanf("%d", &v[k]);
	}

	// Buscar os elementos comuns
	// Percorrendo a matriz	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			// Elemento m[i][j] da matriz
			
			// Para cada elemento da matriz,
			// busca-se no vetor (percorrer o vetor todo)
			for(k = 0; k < 15; k++)
			{
				if(m[i][j] == v[k])
				{
					printf("%d\n", v[k] );
				}
			}
		}
	}

	return 0;
}

