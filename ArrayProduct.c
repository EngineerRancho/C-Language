#include<stdio.h>
int main(){
    int n, product = 1;
    printf("Enter the Number of elements in the Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        product = product * arr[i];
    }
    printf("Product of all %d elements = %d \n", n, product);

    return 0;
}