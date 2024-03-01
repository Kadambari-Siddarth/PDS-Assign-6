#include <stdio.h>

int isPrime(int n){
    for(int i = n/2; i > 1; i--){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int a, b;
    printf("Lower Limit ");
    scanf("%d", &a);

    printf("Upper Limit ");
    scanf("%d", &b);

    for(int i = a;i <= b; ++i)
    {
        if(isPrime(i) == 1){
            printf(" %d ,", i);
        }
    }
    return 0;
}