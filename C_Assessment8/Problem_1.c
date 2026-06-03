#include<stdio.h>
int disp_sum(); 
int main(){
    printf("%d",disp_sum());
}
int disp_sum(){
    int sum=0;
    for(int i = 1;i<6;i++){
        sum+=i;
    }
    return sum;
}