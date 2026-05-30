#include <stdio.h>
int main()
{   
    int a;  
    int digits =0;
    int pow=1;
    printf("enter a no : ");
    scanf("%d",&a);
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
    printf("%d",a);   

}