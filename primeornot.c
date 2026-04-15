#include <stdio.h>

int main(){
    int n , i;
    printf("enter the number ");
    scanf("%d" , &n);
    int flg = 0;
    for (i = 2 ; i<n ; i++){
        if (n%i == 0){
            flg++;
        }
    }
    if (flg == 0 ){
        printf("the entered number is prime");
    }
    else {
        printf("the entered nubmer is not prime");
    }
    return 0;
}