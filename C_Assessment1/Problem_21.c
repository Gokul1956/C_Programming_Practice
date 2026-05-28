#include<stdio.h>
int main(){
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    
    a=a-(a%2)*5;
   
    printf("Result : %d",a);
}