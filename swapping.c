#include<stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);

    printf(" The values before swapping, a = %d, b = %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("The numbers after swapping, a = %d, b = %d \n", a, b);
    return 0;

}