# include <stdio.h> 
//input the number of days of a month and print the month name

int main(){
     int n ;
     printf("enter the days the month have");
     scanf("%d" , &n);
     if (n==28 || n==29){
        printf("february");
     }
     else if (n==31){
        printf("january , march , may , july , august , october, december");

     }
     else if (n==30){
        printf("april , june , september , november");
     }
     else{
        printf("the number of days you have entered does not exist on earth may be you are from mars\nwelcome to earth");
     }
     return 0;
}