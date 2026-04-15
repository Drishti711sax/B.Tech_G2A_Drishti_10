#include <stdio.h>

int main(){
    int a , b , c , e;
    char opr;
    float d, div; 
    printf("enter two numbers");
    scanf("%d%d" , &a , &b);
    printf("enter the operator");
    scanf(" %c" , &opr);
    switch (opr){
        case '+':
        c = a+b;
        printf("the value of the sum is %d \n" , c);
        break;
        case '-':
        c = a-b;
        printf("the difference is %d" , c);
        break;
        case '*':
        c = a*b;
        printf("the product si %d \n" , c);
        break;
        case '/':
        d = (float)a;
        div = d/b;
        printf("the division is %f \n " , div);
        break ;
        case '%' :
        e = (int)a;
        c = e%b;
        printf ("the remainder is %d \n " , c) ;
        break;
        default:
        printf("you have entered wrong operator ");


    }
    
    return 0;
}