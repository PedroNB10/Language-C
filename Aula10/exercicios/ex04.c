#include <stdio.h>
#include <math.h>

#define TAM 6

 typedef struct pointData{
        double radius,arg,x,y;

    }pointData;

int main (){
    int i = 0;
   pointData points[TAM];

    for(i = 0; i < TAM; i++){
        scanf("%lf %lf",&points[i].radius,&points[i].arg);
        points[i].arg = points[i].arg  * (acos(-1)/180);
        points[i].x = points[i].radius * cos(points[i].arg);
        points[i].y = points[i].radius * sin(points[i].arg);
    }

    for(i = 0; i < TAM; i++){
       printf("(%.2lf, %.2lf)\n",points[i].x,points[i].y);
    }





    return 0;
}