#include <stdio.h>

int main(){
    // to print reverse of the number
    int n ;
    printf("enter teh number ");
    scanf("%d" , &n);
    int r, s=0;
    while(n>0){
        r = n%10;
        s = s*10 + r;
        n = n/10;
    }
    printf("the reverse of the number is %d" , s);
    return 0;
}