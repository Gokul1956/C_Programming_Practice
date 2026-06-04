#include<stdio.h>

int main(){
    int arr[5];
    int temp;
    int sum =0;
    int rev[5];
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }


    for(int i=0;i<5;i++){
        temp = arr[i];
        rev[i]=0;
        while(temp!=0){
            
            rev[i] =rev[i]*10 +(temp%10);
            temp=temp/10;
        }
        sum+=rev[i];
    }
    printf("SUM : %d",sum);
}
