#include <stdio.h>
// sum of array elements

int main(){
    int a[100];
    int i , n;
    printf("enter the size of the array");
    scanf("%d" , &n);
    printf("enter teh array");
    for (i = 0 ; i<n; i++){
        scanf("%d" , &a[i]);
    }
    int sum = 0;
    int j ;
    for (j = 0 ; j<n; j++){
        sum = sum + a[j];
    }
    printf("the sum of the aray is :%d " , sum);

    return 0;

}