#include <stdio.h>

int main() {
    float inches, centimeters;

    printf("Enter height in inches: ");
    scanf("%f", &inches);

    centimeters = inches * 2.54;
    printf("Height in centimeters: %.2f cm\n", centimeters);

    return 0;
}
