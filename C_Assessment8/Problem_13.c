#include<stdio.h>
int disp_single_digit_square(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",disp_single_digit_square(x));
}
int disp_single_digit_square(int a){
    int count = 0;
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
    return count;
}