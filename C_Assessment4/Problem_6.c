#include<stdio.h>
int main(){
    int a=11;
    

    loop : if(a<20)
    {
        if(a%2 != 0)
        {
         printf("%d\n",a);   
        }
        a++;
        goto loop;
    }
    
}