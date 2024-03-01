#include <stdio.h>
#include <math.h>

void solve(int *arr, int avg, int n){
    for(int i = 0;i < n; ++i){
        if(*(arr + i) > avg){
            printf("%d ", *(arr + i));
        }
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int avg = 0;
    for(int i = 0;i < n; ++i){
        scanf("%d", &arr[i]);
        avg += arr[i];
    }
    avg /= n;

    solve(arr, avg, n);
    return 0;
}