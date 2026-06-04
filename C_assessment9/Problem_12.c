#include<stdio.h>

int main(){
    int num;
    int sum=0;
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
        sum += num;
        count++;
    }
       
       

    printf("SUM : %d \n",sum);
    printf("COUNT : %d",count);

}
