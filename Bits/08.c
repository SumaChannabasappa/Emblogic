/* program to find 2's compliment of integer */

#include <stdio.h>

int findTwosComplement(int num) {
    return (~num) + 1;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int twosComplement = findTwosComplement(number);

    printf("Original Number: %d\n", number);
    printf("2's Complement: %d\n", twosComplement);

    return 0;
}

