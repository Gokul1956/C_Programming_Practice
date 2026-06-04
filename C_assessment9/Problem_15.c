#include<stdio.h>

int main(){
    int num;
    int avg=0;
    int arr[100];
    int Sumarr[100];
    int count=0;
    int sum =0;
    int temp;

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
    
    for(int i =0;i<count;i++){
        int sum =0;
        temp = arr[i];
        while (temp!=0)
        {
            sum += temp%10; 
            temp=temp/10;
        }
        Sumarr[i]=sum;                  
    }
    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(Sumarr[i] > Sumarr[j])
            {
                temp=Sumarr[i];
                Sumarr[i] = Sumarr[j];
                Sumarr[j] = temp;
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        printf("%d ", Sumarr[i]);
    }
}
