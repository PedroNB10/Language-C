#include <stdio.h>

int main (){
     int i,x,quadradoDaSoma = 0,SomaDosQuadrados = 0,diferenca = 0;
     
     
     scanf("%d",&x);
     
     for (i = 1; i <= x; i++){
        quadradoDaSoma = quadradoDaSoma + i; 
        SomaDosQuadrados = SomaDosQuadrados + i*i;
     }
     
     quadradoDaSoma = quadradoDaSoma*quadradoDaSoma;
     diferenca = quadradoDaSoma - SomaDosQuadrados;
     
     printf("%d",diferenca);
     
     
    
    return 0;
}