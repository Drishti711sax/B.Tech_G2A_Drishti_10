#include <stdio.h>
#include <math.h>
int main(){
    float r ;
    printf("enter the radius of the circle");
    scanf("%f" , &r);

    float area;
    float circumference;
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    printf("the area of the circle is : %f \n" , area );
    printf("the circumference of the circle is : %f" ,circumference );
    return 0;
}