#include<stdio.h>
int main(){
    int a;
    int count =0;
    printf("Enter a  digit no : ");
    scanf("%d",&a);
    while(a!=0){
        int i=0;
        int check = a%10;
        while(i*i<=check){
            if(i*i == check){
                count++;
                break;
            }
            i++;
        }       
        a=a/10;
    }
    printf("%d",count);
}