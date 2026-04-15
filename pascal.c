#include <stdio.h>

int main(){
    int i , j , n , coef = 1 , k ;
   printf("enter the number of rows ");
   scanf("%d" , &n);
   for (i = 0 ; i<n ; i++){
    for (k=0 ; k<n-i ; k++){
        printf(" ");
    }
    for (j = 0 ; j<=i ; j++){
        if (j == 0 || i == 0){
            coef = 1;
            printf("%d \t" , coef);
        }
        else{
            coef = coef*(i-j+1)/j;
            printf("%d \t" , coef);
        }
        
    }
    printf("\n");

   }
    return 0 ;
}