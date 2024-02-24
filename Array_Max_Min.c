#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the Number of Elements to Input : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("Maximum element of array is : %d \n", max);
    printf("Minimum element of array is : %d \n", min);

    return 0;
}