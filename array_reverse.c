#include<stdio.h>
int main(){
    
    int size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        int a = i+1;
        printf("\nEnter the element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    for (int i = size-1; i >= 0 ; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;

}
