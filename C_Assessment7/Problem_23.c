#include<stdio.h>
void disp_single_digit_square(int a);
int main(){
    int x;
    printf("enter a no :");
    scanf("%d",&x);
    disp_single_digit_square(x);
}
void disp_single_digit_square(int a){
    int count =0;      
    while (a!=0)
    {
        for(int i=1;i<4;i++){
        int digit=a%10;
        if(i*i == digit){
            count++;
        }       
        
        }
        a=a/10;
    }
    
    printf("%d",count);
 
}