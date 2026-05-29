#include<stdio.h>
int main(){
    int a;
    printf("enter a No : ");
    scanf("%d",&a);
    int one =a%10;
    int ten =(a/10)%10;
    int hun =(a/100)%10;
    int thous=(a/1000)%10;
    printf("%d",(one == ten)*(hun!=thous));
    return 0;
}