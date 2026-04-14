#include <stdio.h>

int main (){
    int n , m ;
    printf("enter two numbers");
    scanf("%d%d" , &n , &m);
    printf("numbers you entered are \n n is %d and m is %d \n" , n , m);
    if (n==m){
        printf("the entered numbers are equal");

    }
    else{
        printf("the entered numbers are not equal");
    }

    return 0;
}