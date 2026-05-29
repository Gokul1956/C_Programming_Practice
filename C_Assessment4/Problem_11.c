#include<stdio.h>
int main(){
    int a;
    int count = 0;
    printf("Enter a No : ");
    scanf("%d",&a);

    
    loop : if(a>0)
    {
        a=a/10;
        count++;
       
        goto loop;
    }
    printf("Output : %d",count);
}