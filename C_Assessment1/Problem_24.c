#include<stdio.h>
int main(){
    int a,ten,one;
    printf("Enter a no: ");
    scanf("%d",&a);
    
    one=a%10;
    ten=(a/10)%10;
    a=a-(one%2)*(ten%2)*5;
   
    printf("Result : %d",a);
}