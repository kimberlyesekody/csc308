#include <stdio.h>

int main() {
   
   int Age;

    printf("Enter your age: ");
    scanf("%d", &Age);

   if (Age >= 18 ){
    printf("You are eligible to vote\n");
   } else {
    printf("You are not eligible to vote\n");
   }

// bit wise operators

    return 0;
}