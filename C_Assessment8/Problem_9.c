#include<stdio.h>
int check_last_digit_odd(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",check_last_digit_odd(x));
}
int check_last_digit_odd(int a){
    int digits =0;
    int pow=1;
    int temp = a;
    while (temp!=0)
    {
        temp = temp/10;
        digits++;
    }
    for(int i=1;i<digits;i++){
        pow =pow*10;
    }
    int Msb = a/pow; 
    
    if (Msb%2 ==0)
    {
        Msb = Msb - 1;        
    }

    a=(Msb*pow)+(a%pow); 
    return a;
}