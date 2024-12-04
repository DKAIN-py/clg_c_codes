#include<stdio.h>

int main() {
    // Initializing matrices with fixed dimensions
    double matr1[3][3], matr2[3][3], resmat[3][3] = {0};

    // Taking input for the first matrix
    printf("Enter the elements for the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matr1[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("Enter the elements for the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matr2[i][j]);
        }
    }

    // Printing the first matrix
    printf("\nFirst Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf  ", matr1[i][j]);
        }
        printf("\n");
    }

    // Printing the second matrix
    printf("\nSecond Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf  ", matr2[i][j]);
        }
        printf("\n");
    }

    // Multiplying the matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                resmat[i][j] += matr1[i][k] * matr2[k][j];
            }
        }
    }

    // Printing the resultant matrix
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf  ", resmat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
