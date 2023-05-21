#include <stdio.h>

#define TAM 6

int main()
{
	int a[TAM], b[TAM];
	int ia;
	int ib;
	
	for(ia = 0; ia < TAM; ia++)
	{
		scanf("%d", &a[ia]);
	}
	
	for(ib = 0; ib < TAM; ib++)
	{
		scanf("%d", &b[ib]);
	}
	
	for(ia = 0; ia < TAM; ia++)
	{
		for(ib = 0; ib < TAM; ib++)
		{
			if( a[ia] == b[ib] )
			{
				printf("%d ", a[ia]);
			}
		}
	}
	
	return 0;
}
