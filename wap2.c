#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    float amountSI, amountCI;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (per year): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;
    amountSI = principal + simpleInterest;

    // Calculate Compound Interest
    amountCI = principal * pow((1 + rate / 100), time);
    compoundInterest = amountCI - principal;

    // Output results
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Amount (Principal + SI) = %.2f\n", amountSI);

    printf("\nCompound Interest = %.2f\n", compoundInterest);
    printf("Amount (Principal + CI) = %.2f\n", amountCI);

    return 0;
}