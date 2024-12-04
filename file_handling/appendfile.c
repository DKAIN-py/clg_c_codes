#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], content[500];

    printf("Enter the file name to append content: ");
    gets(filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter content to append to the file:\n");
    gets(content);

    fprintf(file, "\n%s", content);
    fclose(file);

    printf("Content appended to file '%s' successfully.\n", filename);
    return 0;
}
