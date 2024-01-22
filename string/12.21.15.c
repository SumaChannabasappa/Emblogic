#include <stdio.h>

void convertToWords(int digit) {
    switch (digit) {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        // Add more cases as needed for other digits
        // ...

        default:
            printf("Invalid digit");
            break;
    }
}

int main() {
    int digit;

    printf("Enter a digit (1-9): ");
    scanf("%d", &digit);

    if (digit >= 1 && digit <= 9) {
        printf("Word representation: ");
        convertToWords(digit);
        printf("\n");
    } else {
        printf("Invalid input. Please enter a digit between 1 and 9.\n");
    }

    return 0;
}

