#include<stdio.h>

int main()
{
    int a;
    float Celcius, Fahrenheit;
    printf("Enter the conversion type : \n");
    printf(" 1. Celcius to Fahrenheit \n");
    printf(" 2. Fahrenheit to Celcius \n");

    scanf("%d", &a);

    if (a == 1)
    {
        printf("Enter the Tempertature in Celcius : ");
        scanf("%f", &Celcius);
        Fahrenheit = Celcius* 9/5 + 32;
        printf("The temperature in Fahrenheit = %.1f \n ", Fahrenheit);
    }
    else if (a == 2)
    {
        printf("Enter the Tempertature in Fahrenheit : ");
        scanf("%f", &Fahrenheit);
        Celcius = (5*(Fahrenheit-32)/9);
        printf("The temperature in Celcius = %.1f \n ", Celcius);
    }
    else
        printf("Invalid Option Selection ");
    
    return 0; 
}