#include <stdio.h>
#include <iostream>

int main(){
    int divisor = 0;        // The divisor we are comparing all numbers with
    int n = 0;              // The current number we are comparing

    printf("\nPlease introduce the divisor\n");
    scanf("%d", &divisor);

    while(true){
        printf("\nPlease introduce a number\n");
        scanf("%d", &n);

        if(n % divisor == 0){
            printf("%d is a divisor of %d\n", divisor, n);
        }else{
            printf("%d is NOT a divisor of %d\n", divisor, n);
        }
    }
}