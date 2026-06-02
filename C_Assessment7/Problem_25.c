#include<stdio.h>
void disp_single_digit_prime(int a);
int main(){
    int x;
    printf("enter a no :");
    scanf("%d",&x);
    disp_single_digit_prime(x);
}
void disp_single_digit_prime(int a){
    int count =0;      
    while (a!=0)
    {
        int isprime =1;
        int digit=a%10;
        if (digit <2)
        {
            isprime=0;
        }
        
        for(int i=2;i<digit;i++){
        
            if(digit%i == 0){
                isprime =0;
            
            }       
        
        }
        a=a/10;
        
        if(isprime){
            count++;
        }
    }
    
    printf("%d",count);
 
}