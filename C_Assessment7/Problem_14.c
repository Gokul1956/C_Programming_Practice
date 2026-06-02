#include <stdio.h>
void disp_interchange_first_last_digit(int x);
int main(){
    int a;  
    
    printf("enter a no : ");
    scanf("%d",&a);
   disp_interchange_first_last_digit(a);

}
void disp_interchange_first_last_digit(int x){
    
    int reverse =0;
    int digits =0;
    int pow=1;
    int last = x%10 ;
    int temp = x;
    while (temp!=0)
    {
        temp = temp/10;
        digits++;
    }
    for(int i=1;i<digits;i++){
        pow =pow*10;
    }
    int first = x/pow;
    x=(x%pow)/10;
    int final =(last*pow)+(x*10)+first;
    
    
    printf("output : %d",final);  
}