#include <stdio.h>
int main() {

    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, /, *): ");
    scanf(" %c", &op);
    if (op != '+' || op != '-' || op != '/' || op != '*'){
        printf("INVALID OPERATOR\n");
    }

    printf("Enter second number: ");
    scanf("%f", &num2);

    if ( op == '+') {
        printf("Result = %.2f", num1 + num2);
    }
    else if ( op == '-') {
        printf("Result = %.2f", num1 - num2);
    }
    else if ( op == '*') {
        printf("Result = %.2f", num1 * num2);
    }
    else if ( op == '/') {
        if ( num2 == 0) {
            printf("Error: Cannot divide by zero");
        } else {
            printf("Result = %.2f", num1 / num2);
        }
    }
    else {
        printf("Invalid Operator");
    }

    return 0;


}