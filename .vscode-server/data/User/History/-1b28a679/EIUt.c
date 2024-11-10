// #include <stdio.h>

// int main() {
//     int experience, age;
//     float salary;

//     // Taking input for experience and age
//     printf("Enter years of experience: ");
//     scanf("%d", &experience);
    
//     printf("Enter age: ");
//     scanf("%d", &age);

//     // Salary calculation logic
//     if (experience >= 5) {  // Experienced person
//         if (age >= 40) {
//             salary = 560000;
//         } else if (age >= 30 && age <= 39) {
//             salary = 480000;
//         } else if (age >= 24 && age <= 29) {
//             salary = 300000;
//         } else {
//             salary = 0;  // Invalid condition for experienced person under 28
//         }
//     } else {  // Inexperienced person
//         salary = 100000;
//     }

//     // Output the calculated salary
//     printf("The calculated salary is: N%.2f\n", salary);

//     return 0;
// }

#include <stdio.h>

void calculateSalary();

int main() {
    int choice;
    int hasInputData = 0;

    while (1) {
        printf("\nChoose an action:\n");
        printf("1. Input experience and age\n");
        printf("2. Calculate salary\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 1) {
            calculateSalary();
            hasInputData = 1;  // Flag to indicate that data has been input
        } else if (choice == 2) {
            if (hasInputData) {
                break;  // Exit loop if salary has been calculated after input
            } else {
                printf("Please choose option 1 first to input experience and age.\n");
            }
        } else {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    }

    return 0;
}

void calculateSalary() {
    int experience, age;
    float salary;

    // Taking input for experience and age
    printf("Enter years of experience: ");
    scanf("%d", &experience);
    
    printf("Enter age: ");
    scanf("%d", &age);

    // Salary calculation logic
    if (experience > 0) {  // Experienced person
        if (age >= 40) {
            salary = 560000;
        } else if (age >= 30 && age <= 39) {
            salary = 480000;
        } else if (age >= 24 && age <= 29) {
            salary = 300000;
        } else {
            salary = 0;  // Invalid condition for experienced person under 28
        }
    } else {  // Inexperienced person
        salary = 100000;
    }

    // Output the calculated salary
    printf("The calculated salary is: N%.2f\n", salary);
}
