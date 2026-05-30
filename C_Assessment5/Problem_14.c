#include <stdio.h>
int main()
{   
    int a;  
    int digits =0;
    int pow=1;
    printf("enter a no : ");
    scanf("%d",&a);
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
    
    
    printf("output : %d",final);   
    
}