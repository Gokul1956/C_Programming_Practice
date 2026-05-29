#include<stdio.h>
int main(){
    int a=1;
    int sum=0;

    loop : if(a<6)
    {
        sum += a++;
        goto loop;
    }
    printf("SUM : %d",sum);
}