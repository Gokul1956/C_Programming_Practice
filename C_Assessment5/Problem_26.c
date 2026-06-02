#include<stdio.h>
int main(){
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
