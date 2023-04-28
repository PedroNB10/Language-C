#include <stdio.h>

int main()
{
	int base, altura;
	float area;
	
	do
	{
		printf("Informe a base e altura:\n");
		scanf("%d %d", &base, &altura);
		
	}while(base <= 0 || altura <= 0);
	
	area = base * altura / 2.0;
	
	printf("Area = %f\n", area);

	return 0;
}

