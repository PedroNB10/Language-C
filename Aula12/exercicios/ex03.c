#include <stdio.h>
#include <ctype.h>

void avarage(double n1, double n2, double n3, char averageType, double *finalAvarage);

int main()
{

    double n1,n2,n3;
    char symbol;
    double finalAvarege;
    scanf(" %lf %lf %lf %c", &n1, &n2, &n3, &symbol);
    
    avarage(n1,n2,n3,symbol,&finalAvarege);

    printf("%.2lf\n",finalAvarege);

    return 0;
}

void avarage(double n1, double n2, double n3, char averageType,double *finalAvarage)
{


    if(toupper(averageType) == 'A')
    {
        *finalAvarage =  (n1 + n2 + n3) / 3;
    } 



    if(toupper(averageType) == 'P')
    {
         *finalAvarage =   (n1 * 5 + n2 * 2 + n3 * 3)/10;
    }

}