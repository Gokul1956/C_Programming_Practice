#include <stdio.h>
void disp_2digit_even_sum6();
int main(){
    disp_2digit_even_sum6();

}
void disp_2digit_even_sum6(){
    
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