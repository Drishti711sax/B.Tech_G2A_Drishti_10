# include <stdio.h> 
#include <math.h>


int main(){
     int a , b , c ;
     printf("enter the coefficient of the quadratic equation ax^2+bx+c = 0 :");
     scanf("%d%d%d" , &a,&b,&c);
     int d = (b*b) - (4*a*c);
     if (d < 0){
        printf("the roots are not real");
     }
     else {
        float D = (float)sqrt(d);
     float x1 = (-b+D)/(2*a);
     float x2 = (-b-D)/(2*a);
     printf("the roots of the equation are %f , %f " , x1 , x2);
     }
     return 0;
}