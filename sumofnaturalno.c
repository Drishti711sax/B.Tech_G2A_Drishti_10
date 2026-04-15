#include <stdio.h>

int main(){
    int n , i;
    printf("enter the number upto which sum is needed");
    scanf("%d" , &n);
    int sum = 0;
    for (i = 1; i<=n ; i++){
        sum = sum + i;
    }
    printf("the sum of the numbers are\n %d " , sum);

    return 0;
}