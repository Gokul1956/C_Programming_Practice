#include<stdio.h>
int  main(){
    int a=10;
    int sum =0;

    while (a<100)
    {
        if(a%2!=0){
            int ten =(a%100)/10;
            
            if (ten == 7)
            {
            sum += a;  
            }
        }
         a++;
    }
    printf("%d",sum);
    
}