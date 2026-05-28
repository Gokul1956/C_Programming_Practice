#include<stdio.h>
int main(){
    int a,Reverse,l2,Result;
    printf("Enter a no: ");
    scanf("%d",&a);
    Reverse =0;
    l2=a%100;
    while(l2 != 0){
        Reverse 
        = Reverse*10 +(l2%10); 
        l2=l2/10;
    }
    Result=(a/100)*100+Reverse;
    printf("Result : %d",Result);
}