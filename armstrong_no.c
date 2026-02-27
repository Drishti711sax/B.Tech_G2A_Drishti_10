# include <stdio.h> 
// armstrong number is a positive integer equal to the 
//sum of its own digits, each raised to the power of the total
// number of digits. For example, 153 is a 3-digit Armstrong 
//number because \(1^{3}+5^{3}+3^{3}=1+125+27=153\)

int main(){
     int n , t , s , cube, sum , i , j , t1;
     
     sum = 0;
     printf("enter the number you want to check: ");
     scanf("%d" , &n);
     t = n;
     t1 = n;
     s = 0;
     while(t>0){
          s = s+1;
          t = t/10;
     }
     while(t1>0){
          int s1 ;
           s1 = t1%10;
           cube = 1; //this was the error 
           // cube needs to be intiallized everytime

          for (j = 1 ; j<=s ; j++){
                 cube = cube*s1;
          }
          sum = sum + cube;
          t1 = t1/10;
     }
     if (sum == n){
          printf("entered number is armstrong");
     }
     else{
          printf("entered number is not armstrong");
     }
     
     return 0;
}