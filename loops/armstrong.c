#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d:\n", start, end);
    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0, digits = 0;

        // Count digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        // Calculate Armstrong sum
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
