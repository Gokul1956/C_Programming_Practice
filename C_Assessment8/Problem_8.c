#include<stdio.h>
int disp_interchange_first_last_digit(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",disp_interchange_first_last_digit(x));
}
int disp_interchange_first_last_digit(int a){
    int digits =0;
    int pow=1;
    int last = a%10 ;
    int temp = a;
    while (temp!=0)
    {
        temp = temp/10;
        digits++;
    }
    for(int i=1;i<digits;i++){
        pow =pow*10;
    }
    int first = a/pow;
    a=(a%pow)/10;
    int final =(last*pow)+(a*10)+first;
    return final;
}