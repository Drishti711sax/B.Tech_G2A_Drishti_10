#include <stdio.h>

int main(){
    //to print sum of corresponding elements i third array
    int a[100] , b[100] , c[100];
    int n ;
    printf("enter the size of the array");
    scanf("%d" , &n);
    printf("enter the elements of the array ");
    int i;
    for (i = 0 ; i<n ; i++){
        scanf("%d%d" , &a[i] , &b[i]);
    }
    int l;
    printf("teh array element are");
    for (l = 0 ; l<n; l++){
       printf("%d \t %d" , a[l] , b[l]);
       printf("\n");
    }
    
    int j;
    for (j= 0 ; j<n; j++){
        int sum = 0;
        sum = a[j] + b[j];
        c[j] = sum;
        //c[j] = a[j] + b[j];
    }
    int k;
    printf("the sum of the corresponding element is \n");
    for (k = 0 ; k<n ; k++){
        printf("%d \n" , c[k]);
        
    

    }


//     int a[100] , b[100];
//    int n;
//    printf("enter");
//    scanf("%d" , &n);
//    printf("enter");
//    int i , j , k , l;
//    for (i = 0 ; i<n; i++){
//        scanf("%d%d" , &a[i] , &b[i]);
//    }
   
//    }
//    int c[100];
//    for (j = 0 ; j<n ; j++){
//        c[j] = a[j] + b[j];
//        //printf("%d" , c[j]);
//        //printf("\n");
//    }
//    for (k = 0 ; k<n; k++){
//        printf("%d" , c[k]);
//        printf("\n");
//    }
    return 0;
}