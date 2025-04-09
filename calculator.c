// calculator.c (Decimal calculator with exponentiation)

#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter first operand: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &operator);
    printf("Enter second operand: ");
    scanf("%lf", &num2);

    switch (op) {
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

    return 0;
}
