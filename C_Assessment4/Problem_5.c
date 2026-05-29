#include<stdio.h>
int main(){
    int a=1;
    

    loop : if(a<10)
    {
        if(a%2 != 0)
        {
         printf("%d\n",a);   
        }
        a++;
        goto loop;
    }
    
}