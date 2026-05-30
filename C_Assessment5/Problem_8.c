#include<stdio.h>
int main(){
    

    for(int i=10;i<100;i++){
        if(i%2 == 0){
         int sumofdigits =0;
        int temp=i;
        while (temp!=0)
        {
           sumofdigits += temp%10;
           temp=temp/10; 
            
        } 
        if (sumofdigits == 6)
             {
                printf("%d\n",i);
             } 
        }        
        
        
        
    }
    
}