#include<stdio.h>
int  main(){
    int a=10;
   
    while (a<100)
    {
         int sum =0;
        if (a%2 !=0)
        {
            int temp =a;
            while(temp !=0){                
                sum += temp%10;
                temp=temp/10;             
            }         
            
        }   
        if (sum == 7)
        {
            printf("%d\n",a);
        }
             
        a++;
    }
    
}