#include<stdio.h>
int main(){
    int a,sum,temp;
    printf("Enter a no: ");
    scanf("%d",&a);
    sum =0;
    temp=a;
    while(temp != 0){
        sum += temp%10;
        temp=temp/10;
    }
   
    a=a-(sum%2)*5;
    
    
   
    printf("Result : %d",a);
}