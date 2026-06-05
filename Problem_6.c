#include <stdio.h>

int main() {
    int num;
    char str[20];
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;

    
    while(temp != 0) {
        count++;
        temp /= 10;
    }

    str[count] = '\0';

    
    for(int i = count - 1; i >= 0; i--) {
        str[i] = (num % 10) + '0';
        num /= 10;
    }

    
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    
}