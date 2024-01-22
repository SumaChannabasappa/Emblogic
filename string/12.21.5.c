#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void count_characters() {
	int vowels = 0, consonants = 0, numbers = 0, special_chars = 0,spaces=0;
	char ch;

	printf("Enter your string: ");
	while ((ch = getchar()) != '\n') {
		char lower_ch = tolower(ch);  // Convert to lowercase for case-insensitive counting
		if (isalpha(lower_ch)) {
			if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
				vowels++;
			} else {
				consonants++;
			}
		} else if (isdigit(ch)) {
			numbers++;
		}else if (isspace(ch)) {  // Check for blank spaces
			spaces++;
		} else {
			special_chars++;
		}
	}

	printf("Vowels: %d\n", vowels);
	printf("Consonants: %d\n", consonants);
	printf("Numbers: %d\n", numbers);
	printf("Special characters: %d\n", special_chars);
	printf("Blank spaces: %d\n", spaces);  // Print spaces count
}

int main() {
	count_characters();
	return 0;
}
