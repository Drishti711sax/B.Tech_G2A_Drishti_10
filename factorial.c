#include <stdio.h>

int main(){
    int n , i;
    printf("enter the number ");
    scanf("%d" , &n);
    int m = 1;
    for (i = 1 ; i<=n ; i++){
        m = m*i;
    }
    printf("the factorial is %d " , m);
    return 0;
}