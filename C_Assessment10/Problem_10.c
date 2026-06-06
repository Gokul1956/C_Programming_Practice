#include<stdio.h>
int main(){
    int count =0;
    char str[51];
    char str2[51];
    printf("Enter no : ");
    scanf("%s",str);
    int i = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    int j =0;
    for (int i = count-1; i >=0; i--)
    {
        str2[j]=str[i];
        j++;   
    }       
    str2[j] ='\0';

    printf("%s",str2);
}