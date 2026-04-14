#include <stdio.h>

int main(){
    int n;
    printf("enter the number you want to be checked");
    scanf("%d" , &n);
    if (n%2 == 0){
        printf("the number n %d is even" , n);
    }
    else{
        printf("the number is odd");
    }
    return 0;
}