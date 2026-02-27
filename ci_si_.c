# include <stdio.h> 

int main(){
     int pri , time, rate ;
     printf("enter the principal amount , time , rate");
     scanf("%d%d%d" , &pri , &time , &rate);
     int mu1 = pri*time*rate;
     float si = (float)mu1/100;
     printf("the simple interest is %f\n " , si);
     float r = (float)rate/100;
     float c = 1 + r;
     float mu = 1;

     for (int i = 1 ; i <= time ; i++){
          mu = c*mu ;
     }   
     float amu = pri*mu;
     float ci = amu - pri ;
     printf("the compound interest is %f \n" , ci);


     return 0;
}