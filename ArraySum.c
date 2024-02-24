#include<stdio.h>
int main(){
    int sum = 0;
    int size;
    printf("Enter the size of Array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the %d elements : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}