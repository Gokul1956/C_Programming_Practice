#include<stdio.h>
int main(){
    int a=6;
    int sum=0;

    loop : if(a>0)
    {
        sum += a--;
        goto loop;
    }
    printf("SUM : %d",sum);
}