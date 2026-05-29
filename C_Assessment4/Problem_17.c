#include<stdio.h>
int main(){
    int a,y;
    y=2;
    
    printf("Enter a No : ");
    scanf("%d",&a);
    loop : if(y<a){
        if (a%y ==0)
        {
            printf("Not Prime");
            return 0;
        }
        y++;
        goto loop;
    }
    printf("Prime");
    
}