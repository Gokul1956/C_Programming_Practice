#include<stdio.h>
int main(){
    int a,one;
    printf("Enter a no: ");
    scanf("%d",&a);
    one=a%10;
    a=(a/100)*100+one;
   
    printf("Result : %d",a);
}