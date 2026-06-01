#include<stdio.h>
int main(){
    int a;
    int count =0;
    printf("Enter a  digit no : ");
    scanf("%d",&a);
    while(a!=0){
        int check = a%10;
        if(check%2 !=0){
            count++;
        }
        a=a/10;
    }
    printf("%d",count);
}