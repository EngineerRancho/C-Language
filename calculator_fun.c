#include<stdio.h>

float Add(float a, float b)
{
    return a + b;
}
float Subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a*b;
}
float divide(float a, float b)
{
    if (a != 0)
    {
        return a/b;
    }
    else{
    printf("Eror: Can not divide number by ZERO. \n");
    return 0;
    }
}
int main()
{
    char operator;
    float num, result = 0;
    scanf("%f", &result);

    do {
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q')
        {
            break;
        }
        scanf("%f", &num);

        switch (operator)
        {
        case '+':
            result = Add(result, num);
            break;
        
        case '-':
            result = Subtract(result, num);
            break;
        
        case '*':
            result = multiply(result, num);
            break;

        case '/':
            result = divide(result, num);
            break;

        default:
            printf("Invalid operator, please enter a valid operator.. ");
            continue;
        }
        printf("Result = %.1f", result);
    }
    while (1);
    
        printf("Calculator Exoted..");
        return 0;
    

}