#include <stdio.h>

int main () {
    double principal, rate, time, simpleInterest;


    printf("Enter the principal amount: ");
    scanf("%lf", &principal);


    printf("Enter the rate of interest (per annum): ");
    scanf("%lf", &rate);


    printf("Enter the time period (in years): ");
    scanf("%lf", &time);


    simpleInterest = (principal * rate * time) / 100;


    printf("The simple interest is: %.2lf\n", simpleInterest);

    return 0;
}
