#include <stdio.h>

voidgreetings(){
    printf("Greetings and salutaions!!");
}

int main () {

    int age;
    char gender = 'M';
    char name[20];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello your %d year old!\n", age);
    greetings();
    return 0;
}

