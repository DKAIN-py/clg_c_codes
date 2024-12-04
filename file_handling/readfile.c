#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], ch;

    printf("Enter the file name to read: ");
    gets(filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file! File may not exist.\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}
