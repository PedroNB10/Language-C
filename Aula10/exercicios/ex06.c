#include <stdio.h>

#define TAM 8

typedef struct carData
{

    char brand[50];
    double price;
    int year;

} carData;

int main()
{

    carData carsArray[TAM];
    int i;
    double P;
    for (i = 0; i < TAM; i++)
    {
        scanf(" %[^\n] %lf %d", carsArray[i].brand, &carsArray[i].price, &carsArray[i].year);
    }

    do
    {
        scanf("%lf", &P);
      if(P > 0)  printf("Carros mais baratos que %.2lf:\n",P);
        for (i = 0; i < TAM; i++)
        {

            if(carsArray[i].price < P){
                printf("%s %.2lf %d\n", carsArray[i].brand, carsArray[i].price, carsArray[i].year);
            }
            
            
        }
        printf("\n");


    } while (P > 0);

    return 0;
}