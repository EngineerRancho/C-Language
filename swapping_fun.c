#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the Second number : ");
    scanf("%d", &b);

    printf("Numbers before swapping = %d, %d \n", a, b);
    swap(&a, &b);
    printf("Numbers after swapping = %d, %d \n", a, b);
    
    return 0;
}