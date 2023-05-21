#include <stdio.h>

#define M 3
#define N 4
#define P 1

int main()
{
	int a[M][N] = { {3,6,1,3}, {4,4,2,2}, {0,1,1,6} };
	float b[N][P] = { 5.00, 3.00, 4.00, 2.50 } ;
	float c[M][P];
	int i, j, k;

	// multiplicacao de matriz por matriz
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < P; j++)
		{
			c[i][j] = 0;
			for(k = 0; k < N; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	// imprimir o resultado: matriz C
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < P; j++)
		{
			printf("%.2f ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}

