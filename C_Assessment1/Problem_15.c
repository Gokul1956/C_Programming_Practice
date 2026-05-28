#include<stdio.h>
int main(){
    int a,Reverse,f2,Result;
    printf("Enter a no: ");
    scanf("%d",&a);
    Reverse =0;
    f2=a/100;
    while(f2 != 0){
        Reverse 
        = Reverse*10 +(f2%10); 
        f2=f2/10;
    }
    Result=Reverse*100+(a%100);
    printf("Result : %d",Result);
}