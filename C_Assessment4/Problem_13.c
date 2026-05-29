#include<stdio.h>
int main(){
    int a;
    int rev = 0;
    printf("Enter a No : ");
    scanf("%d",&a);

    
    loop : if(a>0)
    {
        int l=a%10;
        rev = (rev*10)+l;
        a=a/10;
        
       
        goto loop;
    }
    printf("Output : %d",rev);
}