#include<stdio.h>
int main(){
    int a;
    Printf("Enter a no : ");
    scanf("%d",&a);
    int one = a%10;
    int ten = (a/10)%10;
    if(one<ten){
        printf("Succcess");
    }else{
        printf("Failure");
    }
    return 0;
}