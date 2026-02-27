#include <stdio.h>

int main() {
    int n, evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;   // add even numbers
        } else {
            oddSum += i;    // add odd numbers
        }
    }

    printf("Sum of even numbers from 1 to %d is: %d\n", n, evenSum);
    printf("Sum of odd numbers from 1 to %d is: %d\n", n, oddSum);

    return 0;
}