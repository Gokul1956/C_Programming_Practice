#include<stdio.h>
int main(){
    int count =0;
    int i =2;
   
    while(i<10){
        int isprime=1;
        int j=2;
        while(j<i){
            if (i%j == 0){
                isprime=0;
                break;
            }
            j++;
        }
        if(isprime){
            count++;
        }
        i++;
    }
    printf("%d",count);
}
