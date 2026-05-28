#include<stdio.h>
int main(){
    int a,ten;
    printf("Enter a no: ");
    scanf("%d",&a);
    ten=(a/10)%10;
    a=a-(ten%2)*5;
   
    printf("Result : %d",a);
}