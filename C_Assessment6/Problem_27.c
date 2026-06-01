#include<stdio.h>
int main(){
    
    int count =0;
    int i =0;
    while(i<100000){
        int sum=0;
        int temp =i;
        while(temp != 0){
            sum += temp%10;
            temp=temp/10;
        }
        if (sum == 14){
            count++;
        }
        i++;
    }
    printf("%d",count);
}