#include <stdio.h>

int main()
{
	int pot = 1;
	int exp = 0;
	
	while(pot < 10000)
	{
		// pot = pot * 5;
		pot *= 5;
		exp++;
	}
	
	printf("Resposta = %d\n", pot);
	printf("Expoente = %d\n", exp);

	return 0;
}

