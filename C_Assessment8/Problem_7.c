#include<stdio.h>
int disp_reverse_number(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",disp_reverse_number(x));
}
int disp_reverse_number(int a){
    int reverse=0;
    while (a!=0)
    {
        reverse=reverse*10 +(a%10);
        a=a/10;
    }
    return reverse;    
}