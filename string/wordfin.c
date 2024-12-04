#include <stdio.h>

int countWords(char str[]) {
    int count = 0, i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            count++;
        }
        i++;
    }
    return count + 1;
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);

    printf("Number of words: %d\n", countWords(str));
    return 0;
}
