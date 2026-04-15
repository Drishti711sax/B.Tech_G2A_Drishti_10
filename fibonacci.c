#include <stdio.h>

int main(){
    int n , i;
    int a = 1 ;
    int b =1;
    printf("enter the number ");
    scanf("%d" , &n);
    int sum = 0;
    if (n==1 || n==2){
        printf("%d%d" , a , b);
    }
    else{
        printf("%d \n%d \n" , a, b);
        for (i = 3 ; i<= n ; i++){
        sum = a + b;
        a = b;
        b = sum ;
        printf("%d \n" , sum);
    }

    }
    
    
    return 0 ;
}