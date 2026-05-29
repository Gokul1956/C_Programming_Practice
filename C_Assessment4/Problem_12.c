#include<stdio.h>
int main(){
    int a;
    int sum = 0;
    printf("Enter a No : ");
    scanf("%d",&a);

    
    loop : if(a>0)
    {
        int l=a%10;
        sum+=l;
        a=a/10;
        
       
        goto loop;
    }
    printf("Output : %d",sum);
}