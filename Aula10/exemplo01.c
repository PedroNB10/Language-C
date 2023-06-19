#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct ponto //nome da struct
	{	
		 double x;
		 double y;
		 double z;
		
		
	}ponto; //nome da variavel
	

int main (){
	
	ponto a,b;
	double distancia;
	scanf(" %lf", &a.x);
	scanf(" %lf", &a.y);
	scanf(" %lf", &a.z);
	scanf(" %lf", &b.x);
	scanf(" %lf", &b.y);
	scanf(" %lf", &b.z);

	
	distancia = sqrt(pow((a.x - b.x),2) + pow((a.y - b.y),2) + pow((a.z - b.z),2));

	printf("distancia: %lf\n",distancia);
	
	return 0;
}
