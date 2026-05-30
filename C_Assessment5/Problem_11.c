#include <stdio.h>
int main()
{   
    int a;  
    int digits =0;
    printf("enter a no : ");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        digits++;
    }
    printf("output : %d",digits);
    
    
}