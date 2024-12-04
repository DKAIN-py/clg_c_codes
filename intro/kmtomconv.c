#include <stdio.h>

int main() {
    float kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    meters = kilometers * 1000;
    printf("Distance in meters: %.2f m\n", meters);

    printf("Enter distance in meters: ");
    scanf("%f", &meters);
    kilometers = meters / 1000;
    printf("Distance in kilometers: %.2f km\n", kilometers);

    return 0;
}
