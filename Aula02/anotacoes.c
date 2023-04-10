#include <stdio.h>//printf e scanf
#include <math.h>// potenciacao,radiciacao,logaritmo,seno

int main (){

	int a;
	int b;
	int c;
	
	printf("Digite o primeiro valor:");
	scanf("%d",&a);
	
	printf("Digite o segundo valor:");
	scanf("%d",&b);
	
	
	c = a + b;
	
	double d;
	
	d = pow(c,2);
	
	
	
	//float e = 2.718;
	//float soma = a + e;
	
	
	printf("Soma de %d e %d = %d \n",a,b,c); //%d é uma maneira de concatenar entre variável inteira e string
	printf("O valor de %d ^2 é igual a: %lf \n",c,d);
	//printf("Constante E = %f \n",e);
	
	//printf("Soma de %d + %f = %f \n ",a,e,soma);
	
	return 0;
}