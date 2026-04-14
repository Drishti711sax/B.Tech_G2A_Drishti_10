#include <stdio.h>

int main(){
    int a ,b ,c;
    printf("enter three numbers");
    scanf("%d%d%d" , &a, &b , &c);
    printf("the entered numbers are \n a is %d , b is %d and c is %d \n" , a , b ,c);
    if (a>b){
        if (a>c){
            printf("the greatest of three is a :%d \n" , a);

        }
        else{
            printf("the greatest of three is c :%d \n" , c);
        }
    }
    else if(b>c){
        printf("the greatest of the three is b :%d" , b);

    }
    else if (c>a){
        printf("the greatest of the three is c :%d" , c);
    }
    else{
        printf("the numbers are equal");
    }
    return 0;
}