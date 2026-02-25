#include <stdio.h>

int main() {
    int marks[5], sum = 0;
    float percentage;
    int i;

    // Input marks for 5 subjects
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculate percentage (assuming each subject is out of 100)
    percentage = (sum / 500.0) * 100;

    // Output results
    printf("\nTotal Marks = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}

