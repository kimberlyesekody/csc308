#include <stdio.h>

int main () {

    int age;
    char gender = 'M';
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello your %d year old!\n", name);
    return 0;
}