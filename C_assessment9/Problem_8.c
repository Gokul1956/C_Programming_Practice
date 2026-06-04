#include<stdio.h>

int main(){
    int j=0;
    int arr[5];
    int even[5];
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {   
        if(arr[i]%2 ==0){
        even[j]=arr[i];
        j++;
        }     
    }
    for(int j=0;j<5;j++){
        printf("%d ",even[j]);
    }        
}
