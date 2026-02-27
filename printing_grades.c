# include <stdio.h> 

int main(){
     int s1 , s2, s3, s4, s5 ;
     printf("enter the marks of 5 subjects :");
     scanf("%d%d%d%d%d" , &s1 , &s2 , &s3 , &s4 , &s5);
     int sum;
     sum = s1+s2+s3+s4+s5;
     int total;
     printf("enter total marks :");
     scanf("%d" , &total);
     float div= (float)sum/total;
     float per = div*100;
     printf("the percentage is %f \n " , per);

     if (90< per <100){
        printf("A");
     }
     else if (80< per <90){
        printf("B");

     }
     else if (60< per < 80){
        printf("C");

     }
     else{
        printf("D");
     }
     return 0;
}