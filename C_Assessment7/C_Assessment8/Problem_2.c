#include<stdio.h>
int disp_rsum(); 
int main(){
    printf("%d",disp_rsum());
}
int disp_rsum(){
    int sum=0;
    for(int i = 6;i>0;i--){
        sum+=i;
    }
    return sum;
}