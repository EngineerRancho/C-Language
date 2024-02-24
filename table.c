#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the number for the Table : ");
    scanf("%d", &a);
    printf("Table of %d : \n");
    for (int i = 1; i <= 10; i++)
    {
        b = a*i;
        printf("%d x %d = %d \n",a,i, b);
    }
    
    return 0;
}