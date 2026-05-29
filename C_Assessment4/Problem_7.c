#include<stdio.h>
int main(){
    int a=11;
    int sum = 0;
    
    loop : if(a<100)
    {
        int d1 = a%10;
        int d2 = a/10;
        sum=d1+d2;
        if (a%2 !=0)
        {
            if(sum==7)
        {
         printf("%d\n",a);   
        }
        }
        
        a++;
        goto loop;
    }
    
}