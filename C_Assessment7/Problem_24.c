#include<stdio.h>
void disp_two_digit_square(int a);
int main(){
    int x;
    printf("enter a no :");
    scanf("%d",&x);
    disp_two_digit_square(x);
}
void disp_two_digit_square(int a){
    int count =0;      
    while (a>=10)
    {
        for(int i=1;i<10;i++){
        int digit=a%100;
        if(i*i == digit){
            count++;
        }       
        
        }
        a=a/10;
    }
    
    printf("%d",count);
 
}