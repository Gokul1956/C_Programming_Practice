#include<stdio.h>
int disp_2digit_ones5(); 
int main(){
    printf("%d",disp_2digit_ones5());
}
int disp_2digit_ones5(){
    int sum=0;
    for(int i = 11;i<100;i++){
        int one = i%10;
        if(one ==5){
            sum+=i;
        }
    }
    return sum;
}