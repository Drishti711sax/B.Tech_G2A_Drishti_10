#include <stdio.h>
int main(){
    // this program swaps two numbers using 3rd variable
    int a , b;
    printf("enter two numbers a and b");
    scanf("%d%d" , &a, &b);
    printf("the numbers you entered \n a is %d , b is %d \n" , a ,b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("numbers after swaping \n a is %d , and b is %d " , a , b);

    return 0;
}