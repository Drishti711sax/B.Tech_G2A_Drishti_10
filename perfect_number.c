# include <stdio.h> 

int main(){
     int n , t , s;
     printf("enter the number you want to check");
     scanf("%d" , &n);
     t = n;
     s = 0;
     for (int i = 1 ; i<t; i++){
        if (n%i == 0){
            s = s+i;
        }
     }
if (s == n){
    printf("entered number is perfect number");
}
else{
    printf("entered number is not perfect number");
}
     return 0;
}