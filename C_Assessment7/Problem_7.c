#include <stdio.h>
void disp_2digit_odd_sum7();
int main(){
    disp_2digit_odd_sum7();

}
void disp_2digit_odd_sum7(){
    
     for(int i=10;i<100;i++){
        if(i%2 != 0){
         int sumofdigits =0;
        int temp=i;
        while (temp!=0)
        {
           sumofdigits += temp%10;
           temp=temp/10; 
            
        } 
        if (sumofdigits == 7)
             {
                printf("%d\n",i);
             } 
        }        
        
        
        
    }
    
}