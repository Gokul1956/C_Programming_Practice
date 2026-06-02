#include<stdio.h>
void check_prime_and_sum14(int a);
int main(){
    int x;
    printf("enter a no :");
    scanf("%d",&x);
    check_prime_and_sum14(x);

}
void check_prime_and_sum14(int a){
       
    int sum =0;

    int temp =a;
     while(temp!=0)
     {
        sum +=temp%10;
        temp=temp/10;
     }
    for(int i =2;i<a;i++){
        if(a%i == 0){
            
            if(sum == 14){
                printf("Non Prime and sum is 14");
            }else{
                printf("Non Prime and sum is not 14");
            }
            return;
        }
    }
   
    if(sum == 14)
    {
        printf("Prime and sum is 14");
    }else
    {
        printf("Prime and sum is not 14");
    }

}