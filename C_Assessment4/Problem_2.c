#include<stdio.h>
int main(){
    int a=5;

    loop : if(a>0)
    {
        printf("%d\n",a--);
        goto loop;
    }
}