#include<stdio.h>
int disp_total_2digit_odd(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",disp_total_2digit_odd(x));
}
int disp_total_2digit_odd(int a){
    int count = 0;
    while(a>=10){
        int check = a%100;
        if(check%2 != 0){
            count++;
        }
        a=a/10;
    }
    return count;
}