#include<stdio.h>
int disp_total_odd_digit(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",disp_total_odd_digit(x));
}
int disp_total_odd_digit(int a){
    int count = 0;
    while(a!=0){
        int check = a%10;
        if(check%2 != 0){
            count++;
        }
        a=a/10;
    }
    return count;
}