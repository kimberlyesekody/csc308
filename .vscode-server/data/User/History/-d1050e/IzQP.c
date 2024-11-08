#include <stdio.h>

int main() {
   
   int  isPAUStudent = 0;
   int isAdult = 1;

   if (isPAUStudent == 1 || isAdult == 1){
    printf("You are eligible to vote\n");
   } else {
    printf("You are not eligible to vote\n");
   }

    return 0;
}