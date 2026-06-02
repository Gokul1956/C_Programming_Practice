#include <stdio.h>
void disp_2digit_odd_sum_tens7();
int main(){
    disp_2digit_odd_sum_tens7();

}
void disp_2digit_odd_sum_tens7(){
    
    int sum =0;
    for(int i= 10;i<100;i++)
    {
        if(i%2 !=0)
        {
            int ten = i/10;
            if(ten == 7)
            {
                sum+=i;                        
            }   
        }     
    }
    printf("%d\n",sum);
    
}