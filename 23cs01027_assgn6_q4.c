#include <stdio.h>
#include <stdbool.h>

int main(){
    int n1, n2;
    printf("Enter the size of first array(bigger) ");
    scanf("%d", &n1);

    int arr1[n1], arr2[n2];
    printf("Enter the elements of the first array ");
    for(int i = 0;i < n1; ++i)
        scanf("%d", &arr1[i]);
    
    printf("Enter the size of second array(smaller) ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array ");

    for(int i = 0;i < n2; ++i)
        scanf("%d", &arr2[i]);
    
    if(n1 < n2){
        printf("Not a subset ");
        return 0;
    }
    printf("So the result is \n");

    bool cnt = false;
    for(int i = 0;i < n2; ++i){
        cnt = false;
        for(int j = 0; j < n1; ++j){
            if(arr2[i] == arr1[j])
            {
                cnt = true;
                break;
            }
        }
        if(cnt == false){
            printf("Not a subset ");
            return 0;
        }
    }
    printf("Is a subset \n");
    return 0;
}