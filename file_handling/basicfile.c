#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], content[500];

    printf("Enter the file name to create: ");
    gets(filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter content to write to the file (press Enter when done):\n");
    gets(content);

    fprintf(file, "%s", content);
    fclose(file);

    printf("File '%s' created and content written successfully.\n", filename);
    return 0;
}
