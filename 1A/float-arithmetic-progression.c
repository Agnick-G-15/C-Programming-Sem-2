#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);
    if(b != 0)
        printf("Division = %.2f\n", a / b);
    else
        printf("Division not possible (division by zero)\n");
    return 0;
}
