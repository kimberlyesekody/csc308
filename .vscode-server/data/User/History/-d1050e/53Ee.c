#include <stdio.h>

float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;  // or some error value
    }
}

float multiplication(float a, float b) {
    return a * b;
}

int main() {
    float a, b;

    printf("Enter your values: ");
    scanf("%f %f", &a, &b);

    float add_result = addition(a, b);
    float sub_result = subtraction(a, b);
    float div_result = division(a, b);
    float mul_result = multiplication(a, b);

    printf("Addition: %.2f\n", add_result);
    printf("Subtraction: %.2f\n", sub_result);
    printf("Division: %.2f\n", div_result);
    printf("Multiplication: %.2f\n", mul_result);

    
//    int Age;

//     printf("Enter your age: ");
//     scanf("%d", &Age);

//    if (Age >= 18 ){
//     printf("You are eligible to vote\n");
//    } else {
//     printf("You are not eligible to vote\n");
//    }

// bit wise operators

    return 0;
}