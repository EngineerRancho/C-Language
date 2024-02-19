#include<stdio.h>

// int factorial(int a){
//     if (a == 1 || a == 0)
//     return 1;
//     else 
//     return a*factorial(a-1);
// }

// int main()
// {
//     int num;
//     printf("Enter the Number :");
//     scanf("%d", &num);

//     if (num < 0) {
//         printf(" The facorial is undefined for negative integers..");
//     }
//     else
//     printf("The facorial of %d is : %d \n", num, factorial(num));
//     return 0;
// }


int factorial(int n)
{
    if (n == 0 || n == 1)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{   
    int num;
    printf(" Enter the number : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf(" The factorial is undefined for a negative integer.. \n ");
    }
    else
    printf(" The facotial of %d is : %d \n", num, factorial(num));
    
return 0;    
}