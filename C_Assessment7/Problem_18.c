#include<stdio.h>
void check_first_2digits_prime(int a);
int main(){
    int x;
    printf("enter a no :");
    scanf("%d",&x);
    check_first_2digits_prime(x);

}
void check_first_2digits_prime(int a){
    a=a%100;
    
    for(int i =2;i<a;i++){
        if(a%i == 0){
            printf("Non Prime");
            return;
        }
    }
    printf("Prime");

}