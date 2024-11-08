#include <stdio.h>

int main() {
   
   int  isPAUStudent = 1;
   int isAdult = 0;

   if (isPAUStudent  || isAdult ){
    printf("You are eligible to vote\n");
   } else {
    printf("You are not eligible to vote\n");
   }

    return 0;
}