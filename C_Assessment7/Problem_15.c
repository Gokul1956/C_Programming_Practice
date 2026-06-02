#include <stdio.h>
void check_last_digit_odd(int x);
int main(){
    int a;  
    
    printf("enter a no : ");
    scanf("%d",&a);
    check_last_digit_odd(a);

}
void check_last_digit_odd(int x){
    
    int digits =0;
    int pow=1;
    int temp = x;
    while (temp!=0)
    {
        temp = temp/10;
        digits++;
    }
    for(int i=1;i<digits;i++){
        pow =pow*10;
    }
    int Msb = x/pow; 
    
    if (Msb%2 ==0)
    {
        Msb = Msb - 1;        
    }

    x=(Msb*pow)+(x%pow); 
    printf("%d",x);    
}