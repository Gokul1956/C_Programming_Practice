#include<stdio.h>
int disp_single_digit_prime(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",disp_single_digit_prime(x));
}
int disp_single_digit_prime(int a){
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
    return count;
}