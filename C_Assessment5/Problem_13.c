#include <stdio.h>
int main()
{   
    int a;  
    int reverse =0;
    printf("enter a no : ");
    scanf("%d",&a);
    while(a!=0)
    {
       reverse = reverse*10 + a%10;
       a=a/10;
    }
    printf("output : %d",reverse);   
    
}