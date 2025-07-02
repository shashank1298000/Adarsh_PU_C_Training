#include <stdio.h>

int main() {
    float a, b, c;
 
    printf("Enter the first numbers (a): ");
    scanf("%f", &a);

    printf("Enter the second numbers (b): ");
    scanf("%f",&b);

    printf("Enter the third numbers (c): ");
    scanf("%f",&c);

    float sum = a + b + c;
    printf("Addition: %.2f + %.2f + %.2f = %.2f\n", a, b, c, sum);

    float subtraction = a - b - c;
    printf("Subtraction: %.2f - %.2f - %.2f = %.2f\n", a, b, c, subtraction);

    float multiplication = a * b * c;
    printf("Multiplication: %.2f * %.2f * %.2f = %.2f\n", a, b, c, multiplication);

    if (b != 0 && c != 0) {
        float division = a / b / c;
        printf("Division: %.2f / %.2f / %.2f = %.2f\n", a, b, c, division);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
