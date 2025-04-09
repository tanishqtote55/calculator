#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Needed for pow()

int main() {
    int mode;

    printf("Select calculator mode:\n");
    printf("1. Decimal Calculator\n");
    printf("2. Hexadecimal Calculator\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &mode);

    if (mode == 1) {
        // Decimal calculator
        double num1, num2;
        char operator;

        printf("Enter first operand: ");
        scanf("%lf", &num1);
        printf("Enter operator: ");
        scanf(" %c", &operator);
        printf("Enter second operand: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case '^':
                printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, pow(num1, num2));
                break;
            default:
                printf("Error: Unsupported operator.\n");
        }
    } else if (mode == 2) {
        // Hexadecimal calculator (only addition shown here)
        char hex1[20], hex2[20];
        int num1, num2;

        printf("Enter first hexadecimal number (e.g., 1A): ");
        scanf("%s", hex1);
        printf("Enter second hexadecimal number (e.g., F): ");
        scanf("%s", hex2);

        num1 = (int)strtol(hex1, NULL, 16);
        num2 = (int)strtol(hex2, NULL, 16);

        int result = num1 + num2;

        printf("Result: %s + %s = %X (Hex), %d (Decimal)\n", hex1, hex2, result, result);
    } else {
        printf("Invalid mode selected.\n");
    }

    return 0;
}
