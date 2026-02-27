# include <stdio.h> 

// checking whether the entered year leap year or not

int main(){
     int year;
     printf("enter the year");
     scanf("%d" , &year);
     if (year%100 == 0 && year%400 == 0){
          printf("it is a leap year");
     }
     else if (year%100 != 0 && year%4 == 0){
          printf("it is leap year");
     }
     else {
          printf("entered year is not a leap year");
     
     }
     return 0;
}