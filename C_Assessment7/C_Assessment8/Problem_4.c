#include<stdio.h>
int disp_2digit_odd_sum_tens7(); 
int main(){
    printf("%d",disp_2digit_odd_sum_tens7());
}
int disp_2digit_odd_sum_tens7(){
    int sum=0;
    for(int i = 11;i<100;i++){
        int ten = i/10;
        int temp =i;
        if(ten ==7){
           if (i%2 !=0)
           {
            sum += i;
           }          
            
        }
    }
    return sum;
}