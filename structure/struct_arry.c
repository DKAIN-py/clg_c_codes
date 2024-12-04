#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[5];
    int n = 5, maxIndex = 0;

    printf("Enter details of 5 students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Student with the highest marks:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].rollNumber);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}
