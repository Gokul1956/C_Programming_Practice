#include<stdio.h>

int main(){
    int arr[5];
    
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]<min)
        {
            min =arr[i];
        }
        
    }
    
    
    printf("MIN : %d",min);
}
