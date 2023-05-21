#include <stdio.h>

#define LIN 5
#define COL 5

int main()
{
	int m[LIN][COL] = {0}; // zera a matriz
	int i, j;
	
	// preenche com 1 a diagonal 
	for(i = 0; i < LIN; i++)
	{
		m[i][i] = 1;
	}
	
	// imprime
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("%d  ", m[i][j] );
		}
		printf("\n");
	}	
	
	return 0;
}

