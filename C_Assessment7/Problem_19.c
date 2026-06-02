#include<stdio.h>
void middle_2digits_prime(int a);
int main(){
    int x;
    printf("enter a no :");
    scanf("%d",&x);
    middle_2digits_prime(x);

}
void middle_2digits_prime(int a){
    a=(a/10)%100;
    
    for(int i =2;i<a;i++){
        if(a%i == 0){
            printf("Non Prime");
            return;
        }
    }
    printf("Prime");

}