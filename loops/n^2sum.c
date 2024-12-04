#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float a, r, sum = 0;

    printf("Enter the first term (a), common ratio (r), and number of terms (n): ");
    scanf("%f %f %d", &a, &r, &n);

    for (int i = 0; i < n; i++) {
        sum += a * pow(r, i);
    }

    printf("Sum of the geometric series: %.2f\n", sum);
    return 0;
}
