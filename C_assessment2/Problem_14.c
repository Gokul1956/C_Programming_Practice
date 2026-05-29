#include<stdio.h>
int main(){
    int a;
    printf("enter a No : ");
    scanf("%d",&a);
    int f2 =a/100;
    int l2 =a%100;
   
    printf("%d",(f2 ==l2));
    return 0;
}