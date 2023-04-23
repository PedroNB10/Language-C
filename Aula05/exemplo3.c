#include <stdio.h>

int main ()
{
    int hip,c1,c2;

    printf("Informe o valor da hipotenusa: ");
    scanf("%d",&hip);
    printf("Informe os valores dos catetos: \n");
    scanf("%d %d",&c1,&c2);

    if(hip * hip == c1 * c1 + c2 * c2)
    {
        printf("Eh um triangulo retangulo! \n");
        
    }
    return 0;
}