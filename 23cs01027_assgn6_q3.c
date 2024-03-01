#include <stdio.h>

void solve(int *arr, int n, int i)
{
    if (n % 2 != 0 && i == n / 2 || n % 2 == 0 && i == 1 + (n / 2))
        return;
    else
    {
        *(arr + i) = *(arr + i) ^ *(arr + n - 1 - i);
        *(arr + n - 1 - i) = *(arr + i) ^ *(arr + n - 1 - i);
        *(arr + i) = *(arr + i) ^ *(arr + n - 1 - i);
        solve(arr, n, i+1);
    }
}

int main()
{
    int n = 5;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    solve(arr, n, 0);
    for(int i = 0;i < n; ++i)
        printf("%d ", arr[i]);
    return 0;
}