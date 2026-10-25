#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter first an
    gle of the triangle: ");
    scanf("%f", &angle1);

    printf("Enter second angle of the triangle: ");
    scanf("%f", &angle2);

    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        printf("\nInvalid input! The sum of two angles must be less than 180 degrees.\n");
        return 1;
    }

    angle3 = 180.0 - (angle1 + angle2);

    printf("\nThe third angle is: %.2f degrees\n", angle3);
    if (angle1 == 90.0 || angle2 == 90.0 || angle3 == 90.0) {
        printf("Result: It is a Right-Angled Triangle.\n");
    } else {
        printf("Result: It is NOT a Right-Angled Triangle.\n");
    }

    return 0;
}