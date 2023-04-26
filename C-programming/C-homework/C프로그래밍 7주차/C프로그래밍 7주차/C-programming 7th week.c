#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    while (1) {
        printf("Enter two numbers and an operator (+, -, *, /) separated by spaces: ");
        scanf_s("%f %f %c", &num1, &num2, &op);

        if (op == 'q') {
            printf("Exiting the program...\n");
            break;
        }

        switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero!\n");
                continue;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator. Please enter a valid operator.\n");
            continue;
        }

        printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);
    }

    return 0;
}
