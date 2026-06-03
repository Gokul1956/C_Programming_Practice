#include<stdio.h>
int disp_biggest_4digit_div7_9(); 
int main(){
    printf("%d",disp_biggest_4digit_div7_9());
}
int disp_biggest_4digit_div7_9(){
    int max=0;
    for(int i = 1;i<10000;i++){
        if(i%7== 0){
            if(i%9 ==0){
                max=i;
            }
        }
    }
    return max;
}