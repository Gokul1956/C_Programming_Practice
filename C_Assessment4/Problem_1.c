#include<stdio.h>
int main(){
    int a=1;

    loop : if(a<6)
    {
        printf("%d\n",a++);
        goto loop;
    }
}