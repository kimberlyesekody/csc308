#include <stdio.h>

int main() {
    char type;
    printf("Enter 'c' for character, 'i' for integer, or 'f' for float: ");
    scanf(" %c", &type);

    switch(type) {
        case 'c': {
            char ch;
            printf("Enter a character (e.i Alphanumeric): ");
            scanf(" %c", &ch);

            printf("Character input: %c, ASCII code: %d, Size: %zu bytes\n", ch, ch, sizeof(ch));
            for (int i = 1; i <= 4; i++) {
                char nextChar = ch + (i * 3);
                printf("Next character %d: %c, ASCII code: %d\n", i, nextChar, nextChar);
            }
            break;
        }
        case 'i': {
            int num;
            printf("Enter an integer (numeric): ");
            scanf("%d", &num);

            printf("Integer input: %d, Size: %zu bytes\n", num, sizeof(num));
            for (int i = 1; i <= 4; i++) {
                int nextInt = num + (i * 3);
                printf("Next integer %d: %d\n", i, nextInt);
            }
            break;
        }
        case 'f': {
            float num;
            printf("Enter a float (numeric): ");
            scanf("%f", &num);

            printf("Float input: %.2f, Size: %zu bytes\n", num, sizeof(num));
            for (int i = 1; i <= 4; i++) {
                float nextFloat = num + (i * 3);
                printf("Next float %d: %.2f\n", i, nextFloat);
            }
            break;
        }
        default:
            printf("Invalid input. Please enter 'c' for character, 'i' for integer, or 'f' for float.\n");
    }

    return 0;
}
