#include <stdio.h>

int main (){
    int N,P,NP,i;
    long long int fatN = 1,fatP = 1,fatNP = 1,finalRes;

    
    do {
        scanf("%d %d",&N,&P);

    }while(N <= 0 || P <= 0);

    NP = N - P;

    for(i = 1; i <= N; i++){
        fatN = fatN *i;
    }

     for(i = 1; i <= P; i++){
        fatP = fatP *i;
    }

     for(i = 1; i <= NP; i++){
        fatNP = fatNP *i;
    }

    finalRes = fatN /(fatP * fatNP);
    printf("%lld",finalRes);

    return 0;
}