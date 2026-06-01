#include<stdio.h>
int main(){
    int a;
    int count =0;
    printf("Enter a no : ");
    scanf("%d",&a);
   
    while (a!=0)
    {
        int isprime =1;
        int digit=a%10;
        if (digit <2)
        {
            isprime=0;
        }
        int i=2;
        while(i<digit){
        
        if(digit%i == 0){
            isprime =0;
            break;
        }       
        i++;
        }
        a=a/10;
        
        if(isprime){
            count++;
        }
    }


    printf("%d",count);
    
}