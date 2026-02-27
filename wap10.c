#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Calculate percentage
    percentage = (m1 + m2 + m3 + m4 + m5) / 5.0;

    printf("Percentage = %.2f\n", percentage);

    // Grade criteria
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } else if (percentage >= 60 && percentage < 80) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}