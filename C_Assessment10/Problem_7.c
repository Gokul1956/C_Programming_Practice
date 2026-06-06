#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    int count =0;
    int i;
    while (str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of the string : %d",count);
    
    
}