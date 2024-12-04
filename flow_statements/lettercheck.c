#include <stdio.h>
#include <ctype.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    character = tolower(character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        printf("The character '%c' is a vowel.\n", character);
    } else if (isalpha(character)) {
        printf("The character '%c' is a consonant.\n", character);
    } else {
        printf("Invalid input. Please enter an alphabetic character.\n");
    }

    return 0;
}
