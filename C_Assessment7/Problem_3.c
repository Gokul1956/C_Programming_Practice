#include <stdio.h>
void disp_sum();
int main(){
    disp_sum();

}
void disp_sum(){
    
    int sum =0;
    for(int i=1; i<6;i++)
    {
        sum+=i;
        
    }
    printf("%d",sum);
}