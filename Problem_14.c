#include<stdio.h>

int main(){
    int num;
    int avg=0;
    int arr[100];
    int count=0;
    int i=0;

    printf("Enter 5 numbers: \n");
    while(1)
    {
        scanf("%d",&num);

        if(num == 0)
        {
            break;
        }

        arr[count] = num;
        count++;
    }
    if (count%2 != 0 ){
        i = count/2;
        printf("%d",arr[i]);
    }else{
        i = count/2;
        avg = (arr[i]+arr[i+1])/2;
        printf("%d",avg);
    }   
}
