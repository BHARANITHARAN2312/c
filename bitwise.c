#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter num1: ");
    scanf("%d", &a);

    printf("Enter num2: ");
    scanf("%d", &b);

    printf("Enter the operator: ");
    scanf(" %c", &op);  

    if (op == '+') {
        printf("%d", a + b);
    } else if (op == '-') {
        printf("%d", a - b);
    } else if (op == '*') {
        printf("%d", a * b);
    } else if (op == '/') {
        if (b != 0)
            printf("%d", a / b);
        else
            printf("Division by zero error.");
    } else {
        printf("Operator not recognized.");
    }

    return 0;
}
