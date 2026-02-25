#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    // Output swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}