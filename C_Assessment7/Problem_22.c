#include<stdio.h>
void disp_total_odd_digit(int a);
int main(){
    int x;
    printf("enter a no :");
    scanf("%d",&x);
    disp_total_odd_digit(x);
}
void disp_total_odd_digit(int a){
    int count =0;      
    while (a>=10)
    {
        int check = a%100;
        if(check%2 != 0){
            count++;
        }
        a=a/10;
    }
    
    printf("%d",count);  
}