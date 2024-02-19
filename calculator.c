#include<stdio.h>
int main()
{
    float a, b, c;
    int operation;
    printf("Enter the first Operand number : ");
    scanf("%f", &a);
    printf("Enter the Second Operand number : ");
    scanf("%f", &b);


    printf("Select the operation : \n");
    printf(" 1- Addition \n");
    printf(" 2- Subtraction 1st - 2nd \n");
    printf(" 3- Multiplication \n");
    printf(" 4- Division 1st/2nd \n");
    printf(" 5- Percentage 1st out of 2nd \n");

    scanf("%d", &operation);

    if (operation == 1)
    {
        c = a+b;
        printf("Addition = %.0f \n", c );
    }

    else if (operation == 2)
    {
        c = a-b;
        printf("Subtraction = %.0f \n", c );
    }

    else if (operation == 3)
    {
        c = a*b;
        printf("Multiplication = %.0f \n", c );
    }

    else if (operation == 4)
    {
        c = a/b;
        printf("Division = %.1f \n", c );
    }

    else if (operation == 5)
    {
        c = (a*100)/b ;
        printf("Percentage = %.2f \n", c );
    }
    
    else
    printf("select a valid number.. ");

    return 0;
}