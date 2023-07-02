#include <stdio.h>

int maior(int n1, int n2, int n3);

int main ()
{
    int a,b,c,r;
    scanf(" %d %d %d", &a,&b,&c);
    r = maior(a,b,c);
    printf("%d\n", r);


    return 0;
}

int maior(int n1, int n2, int n3){
   int maiorNum = n1;

   if(maiorNum < n2){
        maiorNum = n2;
   }

   if(maiorNum < n3){
        maiorNum = n3;
   }

   return maiorNum;

}