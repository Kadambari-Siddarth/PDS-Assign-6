#include <stdio.h>

void solve(int city, int arr[city][7]){
    float avg;
    for(int i = 0;i <city; ++i){
        avg = 0;
        for(int j = 0; j < 7; ++j){
            avg += arr[i][j];
        }
        printf("%.2f, ", avg/7);
    }

}
int main(){
    int n;
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    printf("Enter the temparature of cities over the week: \n");
    int arr[n][7];
    for(int i = 0;i < n; ++i){
        for(int j = 0; j < 7; ++j){
            scanf("%d", &arr[i][j]);
        }
    }
    solve(n, arr);
    return 0;
}