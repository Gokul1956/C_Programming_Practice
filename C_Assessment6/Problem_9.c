#include<stdio.h>
int  main(){
    int a=10;
    int sum =0;
   
    while (a<100)
    {
         int one =a%10;
         
         if (one == 5)
         {
           sum += a;  
         }
         a++;
    }
    printf("%d",sum);
    
}