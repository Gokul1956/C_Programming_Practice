#include<stdio.h>
int main(){
    int a,Reverse;
    printf("Enter a no: ");
    scanf("%d",&a);
    Reverse =0;
    while(a != 0){
        Reverse = Reverse*10 +(a%10); 
        a=a/10;
    }
    printf("Result : %d",Reverse);
}