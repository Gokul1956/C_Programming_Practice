#include<stdio.h>
void disp_biggest_4digit_div7_9();
int main(){
    disp_biggest_4digit_div7_9();
}
void disp_biggest_4digit_div7_9(){
    int max=0;
    for(int i = 1;i<10000;i++){
        if(i%7== 0){
            if(i%9 ==0){
                max=i;
            }
        }
    }
    printf("%d",max);  
}