#include <stdio.h>
#include <math.h> // pi

int main()
{
	int raio;
	float area;
	
	do
	{
		printf("Informe o valor do raio: ");
		scanf("%d", &raio);
		
		if(raio <= 0)
		{
			printf("Raio deve ser maior que zero!\n");
		}
		
	}while(raio <= 0);

	area = raio * raio * acos(-1);
	
	printf("Area = %f\n", area);

	return 0;
}

