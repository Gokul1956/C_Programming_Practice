#include<stdio.h>
int main(){
    int a;
    printf("Enter a no: ");
    scanf("%d",&a);
    
    a=(a/10)*10+2;
   
    printf("Result : %d",a);
}