#include<stdio.h>
int main(){
    int a;
    Printf("Enter a no : ");
    scanf("%d",&a);
    int f2 = a/100;
    int l2 = a%100;
    if(f2==l2){
        printf("Succcess");
    }else{
        printf("Failure");
    }
    return 0;
}