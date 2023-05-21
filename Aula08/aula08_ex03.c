#include <stdio.h>

int main()
{
	float m[5][4];
	int i, j;
	
	// leitura dos dados
	for(i = 0; i < 5; i++)
	{
		printf("Digite a matricula do aluno %d: ", i);
		scanf("%f", &m[i][0] );
		
		printf("Digite a nota 1 do aluno %d: ", i);
		scanf("%f", &m[i][1] );
		
		printf("Digite a nota 2 do aluno %d: ", i);
		scanf("%f", &m[i][2] );
		
		m[i][3] = ( m[i][1] + m[i][2] ) / 2.0;
	}
		
	// imprime a matriz
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%6.1f  ", m[i][j] );
		}
		printf("\n");
	}
	
	return 0;	
}
