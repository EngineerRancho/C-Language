#include <stdio.h>

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
}

int main() {
    char operator;
    float num1, num2, result = 0;
    // printf("enter First Number : ");
    scanf("%f", &result);
    do {
        // Input: Get operator and second number from the user
        // printf("Enter operator followed with number (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q') {
            // Exit the program if 'q' is entered+
            break;
        }

        // printf("Enter second number: ");
        scanf("%f", &num2);

        // Perform the requested operation using the previous result as the first number
        switch (operator) {
            case '+':
                result = add(result, num2);
                break;
            case '-':
                result = subtract(result, num2);
                break;
            case '*':
                result = multiply(result, num2);
                break;
            case '/':
                result = divide(result, num2);
                break;
            default:
                printf("Invalid operator. Please enter a valid operator.\n");
                continue; // Skip the rest of the loop and start over
        }

        // Output: Display the result
        printf("Result: %.2f", result);

    } while (1); // Infinite loop until 'q' is entered

    printf("Calculator exited.\n");

    return 0;
}
