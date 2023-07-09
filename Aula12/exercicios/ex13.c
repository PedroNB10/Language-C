#include <stdio.h>

typedef struct Ponto{
    int x,y;

}Ponto;

int pontoEstaEmRet(int Px, int Py, int Vsx, int Vsy, int Vix, int Viy);

int main ()
{

    Ponto P,VI,VS;

    scanf(" %d %d",&P.x, &P.y);

    scanf(" %d %d",&VI.x, &VI.y);
    scanf(" %d %d",&VS.x, &VS.y);

    
    printf("%d\n",pontoEstaEmRet(P.x,P.y,VS.x,VS.y,VI.x,VI.y));
    

    return 0;
}

int pontoEstaEmRet(int Px, int Py, int Vsx, int Vsy, int Vix, int Viy){

    if(Px > Vix && Px < Vsx && Py > Viy && Py < Vsy){
        return 1;
    }
    else{
        return 0;
    }

}