#include<stdio.h>
int main(){
    int a;
    int reverse =0;
    printf("Enter a no : ");
    scanf("%d",&a);

    while(a!=0){
        reverse= reverse*10 + a%10;
        a=a/10;
    }
    printf("%d",reverse);
}