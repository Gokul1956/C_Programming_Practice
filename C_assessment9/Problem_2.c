#include<stdio.h>

int main(){
    int arr[5];
    int avg =0;
    int sum =0;
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++){
        sum += arr[i];
        avg=sum/5;
    }
    printf("AVG : %d",avg);
}
