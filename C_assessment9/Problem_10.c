#include<stdio.h>

int main(){
    
    int j=0;
    int arr[5];
    int Non_prime[5];
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {   
        int isprime=1;
        if(arr[i] <= 1)
        {
            isprime = 0;
        }
        for(int a =2 ; a< arr[i];a++){
            
            if(arr[i] % a == 0){
                isprime=0;
                break;
            }     
                  
        }
         if(isprime==0){
                Non_prime[j]=arr[i];
                j++;
            } 
        
    }
    for(int i=0;i<j;i++){
        printf("%d ",Non_prime[i]);
    }        
}
