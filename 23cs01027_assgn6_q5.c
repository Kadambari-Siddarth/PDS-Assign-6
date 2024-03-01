#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of row: ");
    scanf("%d", &n);
    printf("\nEnter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &arr[i][j]);

    int arr2[m][n];
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            arr2[i][j] = arr[j][i];
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}