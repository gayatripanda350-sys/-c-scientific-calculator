
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b, result;
    double angle;

    // Display calculator menu
    printf("===== SCIENTIFIC CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Sin (angle in degrees)\n");
    printf("8. Cos (angle in degrees)\n");
    printf("9. Tan (angle in degrees)\n");
    printf("10. Log (base 10)\n");
    printf("11. Natural Log (ln)\n");

    // Get the user's choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a + b;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a - b;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);

            // Avoid division by zero
            if (b != 0) {
                result = a / b;
                printf("Result = %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &a, &b);
            result = pow(a, b);
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &a);

            // Square root is real only for non-negative numbers
            if (a >= 0) {
                result = sqrt(a);
                printf("Result = %.2lf\n", result);
            } else {
                printf("Error: Negative number!\n");
            }
            break;

        case 7:
            printf("Enter angle in degrees: ");
            scanf("%lf", &angle);

            // Convert degrees to radians for sin()
            result = sin(angle * 3.141592653589793 / 180.0);
            printf("Sin = %.2lf\n", result);
            break;

        case 8:
            printf("Enter angle in degrees: ");
            scanf("%lf", &angle);

            // Convert degrees to radians for cos()
            result = cos(angle * 3.141592653589793 / 180.0);
            printf("Cos = %.2lf\n", result);
            break;

        case 9:
            printf("Enter angle in degrees: ");
            scanf("%lf", &angle);

            // Tangent is undefined at 90 + 180*k degrees
            if (fabs(cos(angle * 3.141592653589793 / 180.0))
                > 1e-10) {
                result = tan(angle * 3.141592653589793 / 180.0);
                printf("Tan = %.2lf\n", result);
            } else {
                printf("Error: Tan is undefined at this angle!\n");
            }
            break;

        case 10:
            printf("Enter a positive number: ");
            scanf("%lf", &a);

            // Logarithm requires a positive number
            if (a > 0) {
                result = log10(a);
                printf("Log = %.2lf\n", result);
            } else {
                printf("Error: Number must be positive!\n");
            }
            break;

        case 11:
            printf("Enter a positive number: ");
            scanf("%lf", &a);

            // Calculate natural logarithm
            if (a > 0) {
                result = log(a);
                printf("Natural Log = %.2lf\n", result);
            } else {
                printf("Error: Number must be positive!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
