#include <stdio.h>
int main(){
    int a[50];
    printf("Enter 50 numbers: \n");
    for(int i=0;i<50;i++){
        scanf("%d",&a[i]);
    }
    int b[50];
    printf("Enter  50 numbers: \n");
    for(int i=0;i<50;i++){
        scanf("%d",&b[i]);
    }
    int result[51];
    int carry =0;
    int sum =0;
    for (int i = 49; i>=0; i--)
    {
        sum =a[i]+b[i]+carry;

        result[i+1]=sum%10;
        carry=sum/10;
    }
    result[0]=carry;
    for(int i =0 ;i<51;i++){
        printf("%d",result[i]);
    }
}