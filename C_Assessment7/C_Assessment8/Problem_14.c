#include<stdio.h>
int disp_two_digit_square(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",disp_two_digit_square(x));
}
int disp_two_digit_square(int a){
    int count = 0;
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
    return count;
}