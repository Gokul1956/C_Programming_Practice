#include<stdio.h>
int main(){
    int a,sum;
    printf("Enter a no: ");
    scanf("%d",&a);
    sum =0;
    while(a != 0){
        sum += a%10;
        a=a/10;
    }
    printf("Result : %d",sum);
}