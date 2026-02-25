#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    float radius, radius_m, area, circumference;
    char unit[10];

    // Input radius and unit
    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the unit (mm/cm/m/inch/ft): ");
    scanf("%s", unit);

    // Convert to meters
    if (strcmp(unit, "mm") == 0) {
        radius_m = radius / 1000.0;
    } else if (strcmp(unit, "cm") == 0) {
        radius_m = radius / 100.0;
    } else if (strcmp(unit, "m") == 0) {
        radius_m = radius;
    } else if (strcmp(unit, "inch") == 0) {
        radius_m = radius * 0.0254;
    } else if (strcmp(unit, "ft") == 0) {
        radius_m = radius * 0.3048;
    } else {
        printf("Unknown unit! Assuming meters.\n");
        radius_m = radius;
    }

    // Calculate area and circumference in SI units
    area = 3.14 * radius_m * radius_m;
    circumference = 2 * 3.14 * radius_m;

    // Output results
    printf("\nRadius in meters = %.4f m\n", radius_m);
    printf("Area = %.4f m^2\n", area);
    printf("Circumference = %.4f m\n", circumference);

    return 0;
}