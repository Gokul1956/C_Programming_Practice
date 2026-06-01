#include<stdio.h>
int main(){
    int i =1000;
    int max =1;
    while(i<10000){
        
        if(i%7 ==0){
            if(i%9 ==0){
                max =i;

            }
        }
        i++;
    }
    printf("%d",max);
}