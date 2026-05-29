#include<stdio.h>
int main(){
    int a;
    printf("enter a No : ");
    scanf("%d",&a);
    int one =a%10;
    int ten =(a/10)%10;
    printf("%d",one == ten);
    return 0;
}