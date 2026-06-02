#include <stdio.h>
void disp_2digit_ones5();
int main(){
    disp_2digit_ones5();

}
void disp_2digit_ones5(){
    
    int sum =0;
    for(int i= 10;i<100;i++)
    {
        int one = i%10;
        if(one == 5)
        {
            sum+=i;                        
        }        
    }
    printf("%d\n",sum);
    
}