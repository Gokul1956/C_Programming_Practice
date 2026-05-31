#include<stdio.h>
int main(){
    int sum=0;
    int count =0;
    for(int i = 10;i<100000;i++){
        int sum=0;
        int temp =i;
        while(temp != 0){
            sum += temp%10;
            temp=temp/10;
        }
        if (sum == 14){
            count++;
        }
    }
    printf("%d",count);
}