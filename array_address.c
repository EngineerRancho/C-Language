#include<stdio.h>
int main(){
    int size;
    printf("Enter the Array Size : ");
    scanf("%d", &size);
    int marks[size];
    printf("Enter the %d elements : \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", marks[i]);
    }
    int a;
    printf("\nEnter the Index number for address : ");
    scanf("%d", &a);
    // printf("%p", &marks[0]);
    printf("\n%p", &marks[a]);
    printf("\n");

    return 0;
}