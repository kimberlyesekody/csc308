#include <stdio.h>

float addition(float a, float b){}
float subtraction(float a, float b){}
float division(float a, float b){}
float multiplication(float a, float b){}

int main() {

int a;
int b;

    printf("Enter your values: ");
     scanf("%d", &a, &b);

     int addition = a + b;
     int subtraction = a - b;
     int division = a/b;
     int multiplaction = a*b;


   float result = addition(a, b );

   printf("%.2f\n", result);
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