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
     switch (op){
     case'+':
    
    printf("add %d",a+b);
    break;
    case'-':
    
    printf("add %d",a-b);
    break;

    case'*':
    printf("add %d",a*b);
    break;

    default:
    printf("invalid symbol:");
    }
}